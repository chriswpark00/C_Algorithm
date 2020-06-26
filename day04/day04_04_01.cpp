#include <stdio.h>
#include <stdlib.h>
// 요세프 문제 
// 1 2 3 4 5 6 7 // 1 2 4 5 7
// 3 6 2 7 5 1 4

//입력: 7 3  (n, k)
//출력: 3 6 2 7 5 1 4
int push(int *arr, int l, int index, int k, int cnt, int death){
	printf("index : %d\n", index);
	if(index >= l - death) index = 0;
	
	if(cnt == k){
		int push = arr[index];
		for(int i = 0; i < l - index - 1; i++){
			arr[index + i] = arr[index + i + 1];
		}
		arr[l - 1] = push;
		
		for(int i = 0; i < l; i++){
			printf("%d ", arr[i]);
		}
		printf("\n-------------\n");
		return index;
	} else{
		cnt++;
		index++;
		return push(arr, l, index, k, cnt, death);
		
	}
	// return push();
	
	// if() return 0;
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
	for(int i = 0; i < n; i++){
		index = push(arr, n, index, k, 1, i);
	}
	
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	
	return 0;
} 
