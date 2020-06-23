#include <stdio.h>
#include <stdlib.h>
typedef struct {
	int score;
	int grade;	
}S;

/*
학생 5명의 점수를 각각 입력 받고
등수(grade)를 출력하고
등수 오름차순으로 점수 출력 해주세요

ex) 
입력 : 60 20 30 40 50
출력: 5 1 2 3 4	/ 60 50 40 30 20
*/

int main() {
	int n;
	printf("인원수 : ");
	scanf("%d", &n);
	S *s = (S *) calloc(n, sizeof(S));
	
	for(int i = 0; i < n; i++){
		printf("학생%d 점수 : ", i + 1);
		scanf("%d", &s[i].score);
		s[i].grade = 1; // 초기 등수 1등으로 세팅 
	}
	// 내 점수가 상대 점수보다 높을 때 등수를 1 증가해준다
	for(int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if(s[i].score < s[j].score){
				s[i].grade++;
			}
		}
	} 
	
	for(int i = 0; i < n; i++){
		printf("학생 %d의 등수: %d\n", i + 1, s[i].grade);
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(s[j].grade == i + 1){
				printf("%d ", s[j].score);
			}
		}
	}	
	return 0;
}


