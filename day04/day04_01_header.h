#include <stdio.h>
#include <stdlib.h>
/*
 인원수 입력받고
 
 이름 과 성적을 입력받고
 
 출력:
 	이름: -- 점 
  
*/
typedef struct{
	char name[10];
	int score;
}S;

void show(S *s, int l){
	for(int i = 0; i < l; i++){
		printf("%s: %d점\n", s[i].name, s[i].score);
	}
}
