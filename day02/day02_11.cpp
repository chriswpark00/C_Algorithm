#include <stdio.h>
#include <stdlib.h>

void order(int *arr, int length){
	for(int i = 0; i < length - 1; i++){
		for(int j = i + 1; j < length; j++){
//			if(arr[j - 1] > arr[j])
		}
	}
}

int main() {
	int arr[4] = {4, 5, 6, 1, 2};
	int length = sizeof(arr) / sizeof(int);
	order(arr, length);
	return 0;
}
