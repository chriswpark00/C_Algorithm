#include <stdio.h>
void sol1(int *arr, int length){
	int pre = arr[0];
	
	printf("%d ", arr[0]);
	for(int i = 1; i < length; i++){
		if(pre == arr[i]){
			
		} else{
			printf("%d ", arr[i]);
			pre = arr[i];
		}
	}
	printf("\n");
	
}

void sol(int *arr, int length){
	for (int i = 0; i < length; i++){
		if (arr[i] == arr[i]) continue;
		printf("%d ", arr[i]);
	}
	
	printf("\n");
}

int main(){
	int arr1[] = {1, 1, 3, 3, 0, 1, 1}; // 1, 3, 0, 1
	
	// int *arr3[] = {&arr[0], &arr[2], &arr[4], &arr[5]};
	int arr2[] = {4, 4, 4, 3, 3};
	int length1 = sizeof(arr1) / sizeof(int);
	int length2 = sizeof(arr2) / sizeof(arr2[0]);
	
	sol1(arr1, length1);
	sol1(arr2, length2);
	
	
 	return 0;
}
