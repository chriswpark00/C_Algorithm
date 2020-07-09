#include <stdio.h>

//main() 함수에서 배열 다루기 with 포인터
int find(int *p, int num, int length){
	int cnt = 0;
	printf("%d aaa\n", length);
	for(int i = 0; i < length; i++){
		if(p[i] == num){
			cnt++;
		}
	}
	printf("%d이 입력된 횟수 = %d", num, cnt);
}

int main(){
	int arr[5]; // << 사용자가 정수 5개 입력 
	// ex) 1 1 3 4 4
	// 출력: 1이 몇번 입력 되었는지 출력
	// ex) 2
	// 함수 사용(포인터사용)
	size_t length = sizeof(arr) / sizeof(int);
	printf("정수 5개 입력%d\n", length);
	for(int i = 0; i < length; i++){
		scanf("%d", &arr[i]); 	
	}
	find(arr, 1, length);
	

	
} 
