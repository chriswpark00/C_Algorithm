#include <stdio.h>

typedef struct student{
	char name[10];
	int score1;
	int score2;
}S;

int main(){
	S s[5];  //여러개의 구조체를 한거번에 생성 가능
	for(int i = 0; i < 5; i++){
		printf("이름: ");
		scanf("%s", &s[i].name);
		printf("점수1: ");
		scanf("%d", &s[i].score1);
		printf("점수2: ");
		scanf("%d", &s[i].score2);
	}	
	
	for(int i = 0; i < 5; i++){
		printf("이름: %s, 점수1: %d, 점수2: %d\n", s[i].name, s[i].score1, s[i].score2);
	}
	return 0;
}
