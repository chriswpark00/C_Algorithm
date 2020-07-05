/*
질문 1: 소수 찾기 
	1부터 n포함까지가 아닌 
	2부터 n포함까지 => return 약수 
	
	
	
	
질문 2: 재귀 함수
1. 재귀 함수 == 순환함수 == 순환호출
2. 정의:
	어떤 함수가 자기자신을 처리하기위해 자신을 호출하는 함수
	-> 팩토리얼
	=> 	f(5) = 5 * f(4)
		f(4) = 4 * f(3)
*/

#include <stdio.h>
#include <stdlib.h>

// 질문 1 
// 소수 찾기!
// 단점: n이 1일경우. (따로 처리) 
int sosu(int n){
	for(int i = 2; i<=n; i++){
		if(n%i == 0){ //i 는 n의 약수이다. 
			return i; 
		}
	}
	
}

// 질문 2
// 재귀 함수 
int f(int n){
	if(n == 1){
		return n;
	} else{
		return n * f(n-1);
	}
	
}
int main(){
	// 1.소수 ->
	int n = 5;
	if(sosu(n) == n){
		printf("n은 소수다!\n");
	}
	
	// 2. 재귀함수 
	int factorial = f(5);
	printf("%d", factorial);
	return 0; 
}
