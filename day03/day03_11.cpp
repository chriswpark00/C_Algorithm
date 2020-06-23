#include <stdio.h>

// 정렬 연습 
void sort(int *arr, int length){
	for(int i = 0; i < length; i++){
		for(int j = 0; j < length - i - 1; j++){
			if(arr[j] > arr[j + 1]){
				int p = *(arr + j);
				
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = p;
				
			}
		}
	}
}
int main() {
	int arr[7] = {2, 7, 5, 4, 6, 1, 3};
	
	sort(arr, 7);
	
	for (int i = 0; i < 7; i++){
		printf("%d ", arr[i]);
	}
	return 0;
} 
