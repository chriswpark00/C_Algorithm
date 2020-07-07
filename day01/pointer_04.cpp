#include <stdio.h>

void show(int *p){
	int length = sizeof(p)/sizeof(p[0]);
	int max = p[0];
	int result = 0;
	int min = p[0];
	int result1 = 0;
	for(int i = 0; i < 5; i++){
		if(max < p[i]){
			max = p[i];
			result = i;
		} 
		
		if(min > p[i]){
			min = p[i];
			result1 = i;
		} 
	}
	
	printf("최소값 인덱스 [%d], 최댓값 인덱스 [%d]", result1, result);
}

int main(){
	
	int arr[5] = {3, 1, 5, 2, 4};
	// 최댓값 과 최솟값을 담고 있는 인덱스 번호를 출력
	show(arr);
}
