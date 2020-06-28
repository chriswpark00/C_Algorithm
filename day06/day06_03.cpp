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


int main(){
	int n = 0; //총 입력 받는 숫자의 개수 
	scanf("%d", &n);
	
	int * arr = (int *) calloc(n, sizeof(int));
	
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	///////////////////////////
	int index = -1;
	
	for(int i = 0; i < n; i++){ //1 3 5 4 0 0 7 0 0 6 
		if(arr[i] == 0){//pop() 실행 
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


