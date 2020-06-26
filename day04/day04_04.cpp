#include <stdio.h>
#include <stdlib.h>
// 요세프 문제 
// 1 2 3 4 5 6 7 // 1 2 4 5 7
// 3 6 2 7 5 1 4

//입력: 7 3  (n, k)
//출력: 3 6 2 7 5 1 4
void push(int *arr, int l, int index){
	int push = arr[index];
	for(int i = 0; i < l - index - 1; i++){
		arr[index + i] = arr[index + i + 1];
	}
	
	arr[l - 1] = push;
}

int main() {
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	int *arr = (int *) calloc(n, sizeof(int));
	for(int i = 0; i < n; i++){
		arr[i] = i + 1;
	}
	///////////////////////
	int index = 0;
	int cnt = 1;
	int death = 0;
	while(1){
		if(death == n - 1){
			push(arr, n, 0);
			break;
		}
		if(index >= n - death){
			index = 0;
		}
		if(cnt == k){
			push(arr, n, index);
			cnt = 1;
			death++;
			continue;
		}
		index++;
		cnt++;
		
	}
	
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	
	return 0;
} 
