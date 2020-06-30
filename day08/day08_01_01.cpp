#include <stdio.h>
#include <stdlib.h>

void selection_sort(int * arr, int n){
	for(int i = 0; i < n; i++){ //n회전 == 데이터 개수 만큼회전 
		int min = arr[i];
		int min_index = i;
		for(int j = i + 1; j < n; j++){
			if(min > arr[j]){
				min = arr[j];
				min_index = j;
			}
		}
		int tmp = arr[i];
		arr[i] = arr[min_index];
		arr[min_index] = tmp;
	}
	
	return;
}
int main(){
	
	int n;
	scanf("%d", &n);
	int * arr = (int *) calloc (n, sizeof(int));
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	
	printf("정렬전: ");
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	selection_sort(arr, n);
	printf("정렬후: ");
		for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
}
