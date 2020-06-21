#include <stdio.h>
#include <stdlib.h>

int main(){
	
	
	int N;
	
	scanf("%d", &N);
	
	int *arr = (int *) calloc(N, sizeof(int));
	for(int i = 0; i < N; i++){
		scanf("%d", &arr[i]);
	}
	
	int result = 0;
	for (int i = 0; i < N - 1; i++){
		for (int j = i + 1; j < N; j++){
			if (arr[i] > arr[j]){
				result++;
			} else {
				break;
			}
		}
	}
	
	printf("%d ----\n", result);
}
