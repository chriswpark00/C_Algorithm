#include <stdio.h>

typedef struct student{
	char name[10];
	int score1;
	int score2;
}S;

int main(){
	S s[5]; //�������� ����ü�� �ѰŹ��� ���� ����
	for(int i = 0; i < 5; i++){
		printf("�̸�: ");
		scanf("%s", &s[i].name);
		printf("����1: ");
		scanf("%d", &s[i].score1);
		printf("����2: ");
		scanf("%d", &s[i].score2);
	}	
	
	for(int i = 0; i < 5; i++){
		printf("�̸�: %s, ����1: %d, ����2: %d\n", s[i].name, s[i].score1, s[i].score2);
	}
	return 0;
}
