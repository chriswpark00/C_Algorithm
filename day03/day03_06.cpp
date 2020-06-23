// 학생 5명, 과목 3개 점수 입력받아
// 평균 .2소수점까지 와 이름을 출력하세요

#include <stdio.h>

typedef struct{
	char name[10];
	int kor;
	int eng;
	int math;
	double avg;
}S; 

int main() {
	int n;
	printf("학생인원 수 : ");
	scanf("%d", &n);
	 
	S s[n];
	
	for(int i = 0; i < n; i++){
		printf("이름: ");
		scanf("%s", &s[i].name);
		
		printf("국영수 점수: ");
		scanf("%d%d%d", &s[i].kor, &s[i].eng, &s[i].math);
		
		s[i].avg = (s[i].kor + s[i].eng + s[i].math) / 3.0;
	}
	
	for(int i = 0; i < n; i++){
		printf("학생 이름: %s, 평균 점수: %.2lf\n", s[i].name, s[i].avg);
	}
	
	return 0;
}
