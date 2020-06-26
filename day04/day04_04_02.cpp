#include <stdio.h>
#include <stdlib.h>
// 요세프 문제 
// 1 2 3 4 5 6 7 // 1 2 4 5 7
// 3 6 2 7 5 1 4

//입력: 7 3  (n, k)
//출력: 3 6 2 7 5 1 4
int check(int *arr, int l){
	for(int i = 0; i < l; i++){
		if(arr[i] != 0){
			return 1;
		}
	}
	
	return 0;
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
	
	int cnt = 0;
	int i = 0;
	while(check(arr, n)){ // check() == 1
		if(arr[i] == 0){
			i++;
			if(i == n){
				i = 0;
			}
			continue;
		}
		cnt++;
		if(k == cnt){
			printf("%d ", arr[i]);
			arr[i] = 0;
			cnt = 0;
		}
		
		i++;
		if(i == n){
			i = 0;
		}
	}
	
	
	
	return 0;
} 
