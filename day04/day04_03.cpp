/*
학생 부 문제
입력/삭제/출력/수정/종료
 
학생의 수를 입력 받고 위 5가지의 기능 생성 

입력: 첫 번째 학생 부터의 정보 입력 (이름 성적) 

삭제: 맨 마지막에 입력된 학생 정보 삭제

출력: 현재까지 입력된 모든 학생의 정보 출력

수정: 학생의 번호를 입력 받아 수정하기 

종료: 프로그램 종료 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	int num;
	char name[10];
	int score;
}STU;

void insert(int *nn, int n, STU *s){
	int index = *nn;
	if(index == n){
		printf("배열이 가득차서 입력 불가!\n");
	} else {
		printf("이름입력: ");
		scanf("%s", &s[index].name);
		printf("성적입력: ");
		scanf("%d", &s[index].score);
		s[index].num = 1001 + index;
		index++;
	}
	*nn = index;
}
void del(int *nn, STU *s){
	int index = *nn;
	if(index == 0){
		printf("삭제할 정보가 없음!\n");
	} else{
		strcpy(s[index-1].name, "");
		s[index-1].score = 0;
		index--;
	}
	*nn = index;
}
void show(int *nn, STU *s){
	int index = *nn;
	if(index == 0){
		printf("출력할 정보가 없음!\n");
	} else {
		for(int i = 0; i < index; i++){
			printf("%d번 %s: %d\n", s[i].num, s[i].name, s[i].score);
		}
	}
}
void update(int *nn, int *num, STU *s){
	int index = *nn;
	int nnum = 0;
	
	printf("수정할 학생의 번호 입력: ");
	scanf("%d", &nnum); 
	int i;
	for(i = 0; i < index; i++){
		if(s[i].num == nnum){
			printf("이름입력: ");
			scanf("%s", &s[i].name);
			printf("성적입력: ");
			scanf("%d", &s[i].score);
		}
	}
	if(i == index){
		printf("존재하지 않는 학생입니다!\n");
	}
	
	*num = nnum;
	*nn = index;
}
//void end();

int main(){
	int n = 0; //학생의 수 
	int nn = 0; //정보 입력된 학생의 수 
	STU *s;
	char menu[50] = "1.입력 2.삭제 3.출력 4.수정 5.종료";
	int end = 0; //종료 
	
	printf("학생 인원 수: ");
	scanf("%d", &n);
	
	s = (STU *) calloc(n, sizeof(STU));
	
	while(true){
		int option = 0;
		printf("--------------------------\n");
		printf("%s\n", menu);
		printf("--------------------------\n");

		printf("번호입력: ");
		scanf("%d", &option);
		int nnum = 0;
		switch(option){
		case 1: //입력 
			insert(&nn, n, s);
			break;
		case 2: //삭제 
			del(&nn, s);
			break;
		case 3: //출력
			show(&nn, s);
			break;
		case 4: // 수정
			if(nn == 0) {
				printf("수정할 정보가 없음!\n");
				break;
			}
			update(&nn, &nnum, s);
			break;
		case 5:
			end = 1;
			break;
		}
		
		if(end) {
			printf("프로그램 종료! \n");
			break;
		}
	}
	
	
	
	return 0;
}
