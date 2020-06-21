#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int a[10] = {0, };
	int N;
	int *arr;
	scanf("%d", &N);
	
	arr = (int *) malloc( N * sizeof(int));
	for(int i = 0; i < N; i++){
		scanf("%d", &arr[i]);
	}
	
	for(int i = 0; i < N; i++){
		if(arr[i] <= 10 && arr[i] > 0){
			a[arr[i] - 1]++;
		}
	}
	
	for(int i = 0; i < 10; i++){
		printf("%d", a[i]);
	}
	
	return 0;
}

/*
int main(){
	int n;
	scanf("%d", &n);
	int *arr = (int *) malloc (n * sizeof(int)); 
	for( int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	
	int res[10] = {0, };
	for(int i = 0; i < n; i++){
		res[arr[i] - 1]++;
		// arr[i] == 5ÀÏ¶§, res[4]++; 
	}
	
	for(int i = 0; i < 10; i++){
		printf("%d", res[i]);
	}
	return 0;
}
*/
