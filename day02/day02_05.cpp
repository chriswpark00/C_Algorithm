#include <stdio.h>
#include <stdlib.h>
 
// 동적 할당 / 동적 메모리 / malloc


/*
	정적static :  프로그램이 실행되기전에 세팅됨.
		ex) 배열, 거의 모든 변수
	 
	동적dynamic : 프로그램 실행이후 세팅됨. 
		ex) 포인터
		
	동적 할당: 정적인 배열을 동적인 포인터를 사용하여 프로그램 실행이후에 세팅하는것. 
*/
int main() {
	/*
	
	int n;
	scanf("%d", &n);
	int *arr = (int *)malloc(n * sizeof(int)); //malloc : memory allocate
	// "n개 만큼의 int를 만들어달라"  명시적 형변환 필수 
	
//	int length = sizeof(arr)/ sizeof(arr[0]);
	for (int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	
	free(arr); //메모리 해제 
	*/
	
	
	// 문제 1
	// 정수 1개 입력받음
	// 정수가 홀수일때 만 공간을 할당(배열을 만들어줌)
	// 짝수일 때는 홀수가 입력될때까지 공간할당을 하지 않는다
	// 배열에 정수들 입력한후,
	// 소수가 몇개인지 출력하는 프로그램 작성!!
	
	// ex) 3
	//		2 4 5
	// 		=> 소수는 2개 라고 출력되면 됨. 
	int length;
	int *arr1;
	int cnt = 0;
	
	// 배열의 길이 (홀수) 를 입력받는다 
	while(true){
		scanf("%d", &length);
		if(length % 2 != 0) break;
		else printf("홀수를 입력하세요!\n");
	}
	
	// 홀수 길이의 배열에 값을 담는다 
	arr1 = (int *) malloc(length * sizeof(int));
	for (int i = 0; i < length; i++){
		scanf("%d", &arr1[i]);
	}
	
	// 소수인지 확인하고 소수인경우 cnt값을 증가 시켜준다. 
	// 소수 구별법 1 부터 자신까지 나눴을 때  총 3번 이상 나누어떨어질때 (약수가 2개 이상)일 때 소수가 아니다. 
	int cntt = 0;
	for (int i = 0; i < length; i++){
		cntt = 0;
		for (int j = 1; j <= arr1[i]; j++){
			if(arr1[i] % j == 0) {
				cntt++;
				printf("%d / %d == %d", arr1[i], j, arr1[i] % j);
			}
		}
		if(cntt > 2) cnt++;
	}
	
	printf("소수 : %d", cnt);
	return 0;
} 
