#include <stdio.h>

int main(){
	int arr[5] = {2, 4, 5, 3, 1};
	int * p;
	p = &arr[0];
	int cnt = 0;
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4 - i; j++){
			if(*(p + i) > *(p + i + j + 1)){
				cnt++;
			} else {
				cnt++;
				break;
			}
		}
	}
	printf("결과값 = %d\n", cnt);
	
	printf("-------------------------------------------\n");
	int arr1[5] = {2, 4, 5, 3, 1};
	p = &arr1[0];
	cnt = 0;
	
	for(int i = 0; i < 5; i++){
		for(int j = i + 1; j < 5; j++){
			if(p[i] > p[j]){
				cnt++;
			} else {
				cnt++;
				break;
			}
		}
	}
	printf("결과값 = %d\n", cnt);
}
