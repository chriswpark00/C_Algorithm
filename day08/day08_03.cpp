/*
탐색 알고리즘
정렬 => 탐색
이진탐색 (== 이분탐색) : 전제조건 있음 (배열에 있는 모든 데이터가 정렬되어있어야한다!) 

예시) 
1 2 3 4 5 6 7 8 9 10 (4의 위치 찾기)
0       4          9			(0 + 9) / 2 = 4 

1 2 3 4
0 1   3			= 1

3 4
2 3			= 2

4
3			
*/

#include <stdio.h>

int search(int *arr, int first, int last, int data){
	int mid = (first + last) / 2;
	if(arr[mid] > data){
		search(arr, 0, mid - 1, data);
	} else if(arr[mid] < data){
		search(arr, mid + 1, last, data);
	} else if(arr[mid] == data){
		printf("index: %d, 값: %d\n", mid, arr[mid]);
		return mid;
	}
	return -1;
}

int binarySearch(int *arr, int data, int s, int e){
	int m = (s + e) / 2;
	while(s<=e){ // se lr lh startend leftright lowhigh
		if(arr[m] == data){
			return m;
		} else if(arr[m] < data){
			s = m + 1;
		} else if(arr[m] > data){
			e = m - 1;
		}
		
		m = (s + e) / 2;
	}
	
	return -1;
}
int main(){
	int arr[9] = {1, 2, 3, 4, 5, 7, 8, 9, 10};
	int n = 0;
	scanf("%d", &n);
	if(binarySearch(arr, n, 0, 8) == -1){
		printf("%d 없는 데이터\n", n);
	} else{
		printf("%d는 [%d]에 있다!\n", n, binarySearch(arr, n, 0, 8));
	}
	
	search(arr, 0, 9, n);
	return 0;
} 
