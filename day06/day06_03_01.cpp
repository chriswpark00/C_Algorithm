/*
stack 연습 문제

예시)
입력: 

10 // 10칸짜리 배열 생성 [] [] [] [] [] [] [] [] [] []
1 3 5 4 0 0 7 0 0 6 // 순서대로 입력받음 STACK인것을 주의!!!!
// 0은 pop()을 의미 
1 6

총 합 구하기: 7 
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
	int n = 0; //총 입력 받는 숫자의 개수 
	scanf("%d", &n);
	
	int * arr = (int *) calloc(n, sizeof(int));
	int data = 0;
	int index = 0;
	for(int i = 0; i < n; i++){
		scanf("%d", &data);
		if(data == 0){
			index = pop(arr, index);
			// index 작업 방법
			// 1. 실제 데이터 &index 주소보내서 포인터로 받아처리
			// 2. return 받아서 처리
			// 3. main에서 직접 처리 
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


