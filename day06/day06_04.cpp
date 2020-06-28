/*
연습 문제

입력:
4 
()()()()
O

)(
X

(()
X

(()())
O
 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int n = 0;
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		char arr[10];
		scanf(" %s", arr);
		int sum = 0;
		int length = strlen(arr);

		for(int j = length - 1; j >= 0; j--){
			if(arr[j] == '('){
				sum--;
			} else if(arr[j] == ')'){
				sum++;
			} 
			
			if(sum < 0) break;
		}
		
		
		if(sum == 0) {
			printf("O\n");
		} else {
			printf("X\n");
		}
	}
	
}
