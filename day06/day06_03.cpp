/*
stack ���� ����

����)
�Է�: 

10 // 10ĭ¥�� �迭 ���� [] [] [] [] [] [] [] [] [] []
1 3 5 4 0 0 7 0 0 6 // ������� �Է¹��� STACK�ΰ��� ����!!!!
// 0�� pop()�� �ǹ� 
1 6

�� �� ���ϱ�: 7 
*/


#include <stdio.h>
#include <stdlib.h>


int main(){
	int n = 0; //�� �Է� �޴� ������ ���� 
	scanf("%d", &n);
	
	int * arr = (int *) calloc(n, sizeof(int));
	
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	///////////////////////////
	int index = -1;
	
	for(int i = 0; i < n; i++){ //1 3 5 4 0 0 7 0 0 6 
		if(arr[i] == 0){//pop() ���� 
			arr[index] = 0;
			index--;
		} else{ // push()
			index++;
			arr[index] = arr[i];
		}
	}
	
	int sum = 0;
	for(int i = 0; i < index + 1; i++){
		sum += arr[i];
	}
	
	printf("SUM: %d", sum);
	
	
}


