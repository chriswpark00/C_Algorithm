/*
퀵 정렬 : 대부분이 정렬된 데이터에서는 오히려 느림!
		: 가장 빠른 정렬알고리즘! 
예시 ) 1 2 3 4 6 5


분할(Divide) -> 정복(정렬, Conquer) -> 결합(합병, Combine)
[기준점]을 사용하는 알고리즘
피벗/피봇(==pivot) 


예시)
[ (3) 5 7 9 1 10 6 2 8 4]
	  l			   r
[ (3) 2 7 9 1 10 6 5 8 4]
 	    l   r
[ (3) 2 1 9 7 10 6 5 8 4]
        r l => 더이상 교환하지 않고 끝! (l과 r이 교차했을시 종료)
		// 교차하자마자 종료 X
		// 교환하려고 봤더니 교차했네? -> 종료
피봇과 r 교환
[ 1 2 (3) 9 7 10 6 5 8 4] 피봇은 제자리를 찾음!

이때 "분할"
[(1) 2] [9 7 10 6 5 8 4]
[1] [2] => 셀이(배열의 요소가) 1개가 되면 종료! "정복" 

[(9) 7 10 6 5 8 4]
        l       r
[(9) 7 4 6 5 8 10]
		     r  l => 교환하려고 봤더니, 교차했다. => 종료
피봇이랑 r이랑 교환
[8 7 4 6 5 (9) 10]
[8 7 4 6 5] [10]
"재귀함수" 구현 divide() 

[(8) 7 4 6 5]

// 필요한 변수
left, right, length, pivot(항상 index 0), 
*/

#include <stdio.h>
#include <stdlib.h>
void quick_sort(int *arr, int n, int left, int right){
	while(1){
		if(arr[0] > arr[left]){
			left++;
		} else{
			break;
		}
	}
	while(1){
		if(arr[0] < arr[right]){
			right--;
		}else{
			break;
		}
	}
	
	if(left < right){
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		return quick_sort(arr, n, left, right);
	} else{
		int tmp = arr[0];
		arr[0] = arr[right];
		arr[right] = tmp;
		divide(arr, right, n);
	}
	
}

int main(){
	int arr[10] = {3, 5, 7, 9, 1, 10, 6, 2, 8, 4};
	int n = 10;
	
	///////////////
	printf("정렬전 : ");
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	//////////////////
	 
	quick_sort(arr, 10, 1, n - 1);
	
	/////////////////
	printf("정렬후 : ");
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
	
}
