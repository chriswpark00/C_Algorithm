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
	// swap() 함수 작성하기!
	swap(&a, &b);
	
	printf("a = %d,  b = %d\n", a, b);
	
	///////////////////////
	// show() 함수 만들기
	// 임의의 5개의 정수를 받아 홀수 만 출력하는 함수 만들기 
	int arr[5];
	for(int i = 0; i < 5; i++){
		scanf("%d", &arr[i]);
	}
	
	show(arr);
	
	
}
