#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int n = 0;
	int *arr;
	int *arr1;
	scanf("%d", &n);
	arr = (int *) calloc(n, sizeof(int));
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	
	for(int i = 0; i < n; i++){
		int j;
		for(j = i - 1; j >= 0; j--){
			if(arr[i] < arr[j]){
				printf("%d ", j+1);
				break;
			}
		}
		
		if (j == -1) printf("0 ");
	}
	
	
}
