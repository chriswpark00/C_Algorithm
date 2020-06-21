#include <stdio.h>

void swap(int *a, int *b){
	int pointer = *a;
	*a = *b;
	*b = pointer;
	
}

void swap2(int *a, int *b){
	int pointer = *a;
	*a = *b;
	*b = pointer;
}

void show(int *arr){
	for(int i = 0; i < 5; i++){
		if(arr[i] % 2 != 0){
			printf("%d\n", arr[i]);
		}
	}
}
int main(){
	int a = 10, b = 20;
	// swap() �Լ� �ۼ��ϱ�!
	swap(&a, &b);
	
	printf("a = %d,  b = %d\n", a, b);
	
	///////////////////////
	// show() �Լ� �����
	// ������ 5���� ������ �޾� Ȧ�� �� ����ϴ� �Լ� ����� 
	int arr[5];
	for(int i = 0; i < 5; i++){
		scanf("%d", &arr[i]);
	}
	
	show(arr);
	
	
}
