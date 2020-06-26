/*
모듈화 프로그래밍.
헤더파일 분리 
- 함수와 구조체를 분리 
*/
#include "day04_01_header.h"


/*
 인원수 입력받고
 
 이름 과 성적을 입력받고
 
 출력:
 	이름: -- 점 
  
*/


int main() {
	int n = 0;
	S *s;
	printf("인원수: ");
	scanf("%d", &n);
	
	s = (S *) calloc(n, sizeof(S));
	for(int i = 0; i < n; i++){
		printf("이름: ");
		scanf("%s", s[i].name); //%s는 &없이 입력받음 
		printf("점수: ");
		scanf("%d", &s[i].score);
	}
	
	show(s, n);
	
	
	return 0;
} 
 
