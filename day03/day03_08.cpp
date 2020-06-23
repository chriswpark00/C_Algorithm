#include <stdio.h>
#include <stdlib.h>

typedef struct person {
	double eye;
	int grade;
}P;

/*
	인원수를 먼저 입력받고
	각각의 시력을 입력 받는다.
	등수 순서대로 시력을 출력
	
	ex)
	입력:
	3
	2.1, -3.2, 1.0
	
	출력:
	2.1 1.0 -3.2 
*/

int main() {
	int n = 0;
	printf("인원수 : ");
	scanf("%d", &n);
	P *p = (P *) calloc (n, sizeof(P));
	for(int i = 0; i < n; i++){
		printf("사람%d 시력: ", i+1);
		scanf("%lf", &p[i]);
		p[i].grade = 1;
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(p[i].eye < p[j].eye){
				p[i].grade++;
			}
		}
	}
	
	double *grade = (double *) calloc(n, sizeof(double));
	for(int i = 0; i < n; i++){
		grade[p[i].grade - 1] = p[i].eye;
	}
	
	for(int i = 0; i < n; i++){
		printf("%d등 시야: %.2lf\n", i + 1, grade[i]);
	} // 2 * n
	
//	for(int i = 0; i < n; i++){
//		for(int j = 0; j < n; j++){
//			if(p[j].grade == i+1){
//				printf("%d등 시야: %.2lf\n", i + 1, p[j].eye);
//			}
//		}
//	} // n * n
} 
