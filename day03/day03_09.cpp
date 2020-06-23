/*
학생의 수를 입력받고
학생마다 이름과 국영수 점수를 입력받는다
각 학생의 이름과 평균 점수를 출력하세요
 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct student {
	char name[10];
	int score[3];
	double avg;
}S;

void show(int n, S *s){
	for(int i = 0; i < n; i++){
		printf("%s %.1lf\n", s[i].name, s[i].avg);
	}
}
int main(){
	int n;
	S *s;
	printf("인원수 : ");
	scanf("%d", &n);
	s = (S *) calloc(n, sizeof(S));
	
	strcpy(s[0].name, "a");strcpy(s[1].name, "b");strcpy(s[2].name, "c");
	for(int i = 0; i < n; i++){
		printf("국/영/수 점수 입력:");
		int sum = 0;
		for(int j = 0; j < 3; j++){
			scanf("%d", &s[i].score[j]); 
			sum += s[i].score[j];
		}
		s[i].avg = sum / 3.0;
	}
	show(n, s);
	return 0;
}


