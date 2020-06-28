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

int push(int *arr, int index, int data){
	arr[index] = data;
	return ++index;
}

int pop(int *arr, int index){
	arr[--index] = 0;
	return index;
}

int main(){
	int n = 0; //�� �Է� �޴� ������ ���� 
	scanf("%d", &n);
	
	int * arr = (int *) calloc(n, sizeof(int));
	int data = 0;
	int index = 0;
	for(int i = 0; i < n; i++){
		scanf("%d", &data);
		if(data == 0){
			index = pop(arr, index);
			// index �۾� ���
			// 1. ���� ������ &index �ּҺ����� �����ͷ� �޾�ó��
			// 2. return �޾Ƽ� ó��
			// 3. main���� ���� ó�� 
		} else{
			index = push(arr, index, data);
		}
	}
	
	int sum = 0;
	for(int i = 0; i < index; i++){
		sum += arr[i];
	}
	
	printf("SUM : %d\n", sum);
}


