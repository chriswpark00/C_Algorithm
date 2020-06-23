#include <stdio.h>
#include <stdlib.h> //calloc malloc
#include <string.h> //strcpy
/*
첫 입력: 사원 인원수
각 사원의 번호는 1001 부터 시작 : 1001, 1002, 1003 ...

두 번째 입력: 각 사원별 이름과 나이 입력 받기

첫번째 출력: 각 사원별 사원번호 / 이름 / 나이 출력
 
세 번째 입력: 제한나이 입력

두 번째 출력: 첫 번째 출력과 동일하지만 제한나이 이상은 제외하고 출력 
*/

typedef struct {
	int num;
	char name[10];
	int age;
}W;

void show(W *w, int length, int minAge){
	printf("--------------------------\n");
	printf("사원번호\t사원이름\t사원나이\n");
	if(minAge == -1){
		for(int i = 0; i < length; i++){
			printf("%8d\t%8s\t%8d\n", w[i].num, w[i].name, w[i].age);
		}
		
	} else{
		for(int i = 0; i < length; i++){
			if(w[i].age <= minAge){
				printf("%8d\t%8s\t%8d\n", w[i].num, w[i].name, w[i].age);
			}
		}
	}
	printf("--------------------------\n");

}
int main(){
	int n = 0; //사원 수
	W *w;
	int minAge;
	printf("인원수 : ");
	scanf("%d", &n);
	w = (W *) calloc(n, sizeof(W));
	for(int i = 0; i < n; i++){
		printf("사원번호%d의 나이입력: ", 1001 + i);
		scanf("%d", &w[i].age);
		printf("사원번호%d의 이름입력: ", 1001 + i);
		scanf("%s", &w[i].name);
		w[i].num = 1001 + i;
	}
	show(w, n, -1);
	printf("제한 나이 입력: ");
	scanf("%d", &minAge);
	
	show(w, n, minAge);
	return 0;
}

