#include <stdio.h>
#include <stdlib.h>
//// 오름차순으로 배열을 입력받는다
//// 맏은 값들의 차이가 가장 작은 값을 리턴
//// 배열에 음수가 담기거나, 차가 음수거나, n이 3보다 작은경우 ERROR출력 
int main() {
	while(true){
		int n;
		int *arr;
		int error = false;
		scanf("%d", &n);
		
		////// 
		if(n < 3) {
			printf("ERROR\n");
			error = true;
		}
		if (error) continue;
		
		//////
		arr = (int *) calloc(n, sizeof(int));
		
		for (int i = 0; i < n; i++){
			scanf("%d", &arr[i]);
			if(arr[i] < 0) error = true;
		}
		if(error) continue;
		
		int result = 0;
		for(int i = 0; i < n - 1; i++){
			int temp = arr[i + 1] - arr[i];
			if (temp < 0) {
				printf("ERROR\n");
				error = true;
				break;
			} else {
				if(i == 0) {
					result = temp;
				} else{
					result = result > temp ? temp : result;
				}
			}
		}
		
		if(!error) printf("RESULT : %d\n", result);
		
	}

	return 0;
	
}
