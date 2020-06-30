/*
���� �˰���: ���� ���� / �� ����

���� ���� 
����) 
[ 4 5 6 9 1 2 8 7 3 ]
 index 0�� ���� ���� ���ڸ� ���� �ְڴ� 

1ȸ��: 
 	min = 4(index 0) -> 1(index 4) 
	[ (1) 5 6 9 (4) 2 8 7 3 ] ��ȯ

2ȸ��:
	min = 5(index 1) -> 4(index 4) -> 2(index 5)
	[ 1 (2) 6 9 4 (5) 8 7 3 ] ��ȯ 
	  
*/

#include <stdio.h>
#include <stdlib.h>
void sort(int * arr, int min, int i, int length, int index, int minIndex){
	if(index == length){
		int tmp = arr[i];
		arr[i] = arr[minIndex];
		arr[minIndex] = tmp;
		printf("%d : %d\n", arr[i], arr[minIndex]);
		return;
	}
	index++;
	if(min > arr[index]){
		min = arr[index];
		minIndex = index;
		return sort(arr, min, i, length, index, minIndex);
	}
}
int main(){
	int arr[9] = { 4, 5, 6, 9, 1, 2, 8, 7, 3};
	int length = sizeof(arr) / sizeof(int);
	int min = arr[0];
	for(int i = 0; i < length; i++){
		sort(arr, min, i, length, i, 0);
	}
	for(int i = 0; i < length; i++){
		printf("%d ", arr[i]);
	}
	return 0;
}


