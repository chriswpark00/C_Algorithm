/*
업다운 게임!!!
 
 
 1. 데이터 개수n 입력
 2. 1~n 오름차순으로 데이터 생성
 3. 게임시작 -> 컴퓨터가 랜덤으로 범위안에 있는 데이터 픽 (랜덤함수) answer
 4. 지정된 데이터를 추측. 
 4-1. ""보다 작습니다/ ""보다 큽니다. ""~""중에 고르시오.
 5. 3번이하로 맞추면 상품지급
 5-2. 10번이상 실패-> 숫자알려주고 자동 종료! 
*/
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

/*
랜덤값
srand(time(NULL));
int data=rand()%10 + 1; //0 ~ 9 -> 1~10 
*/
void puzzle(int n, int answer, int cnt, int min, int max){
	if(cnt == 10){
		printf("10번 초과! 실패! 정답은: %d", answer);
		return; 
	}
	
	int result;
	scanf("%d", &result);
	if(result < min || result > max){
		printf("범위를 벗어남.\n");
		puzzle(n, answer, cnt, min, max);
	}
	cnt++;
	if(result > answer){
		max = result - 1;
		printf("%d보다 작습니다. [%d~%d]중에 고르시오\n", result, min, max);
		puzzle(n, answer, cnt, min, max);
	} else if(result < answer){
		min = result + 1;
		printf("%d보다 큽니다. [%d~%d]중에 고르시오\n", result, min, max);
		puzzle(n, answer, cnt, min, max);
	} else if(result == answer){
		if(cnt <= 3) printf("상품지급\n");
		printf("정답!\n");
		return;
	}
	
	return;
}

int main() {
	int n = 0;
	printf("데이터 개수: ");
	scanf("%d", &n);
	
	int cnt = 0;
	srand(time(NULL));
	int answer = rand()%n + 1;
	
	puzzle(n, answer, 0, 1, n);
	
//	while(cnt < 10){
//		int result;
//		scanf("%d", &result);
//		cnt++;
//		if(result > answer){
//			printf("%d보다 작습니다. [%d~%d]중에 고르시오\n", result, 1, result - 1);
//		} else if(result < answer){
//			printf("%d보다 큽니다. [%d~%d]중에 고르시오\n", result, result + 1, n);
//		} else{
//			if(cnt <= 3) printf("상품지급\n");
//			printf("정답!\n");
//			break;
//		}
//	}
//	
//	if(cnt == 10){
//		printf("실패! 정답은: %d", answer);
//	}
	
	return 0;
}
