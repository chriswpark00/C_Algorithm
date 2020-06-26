/*
�л� �� ����
�Է�/����/���/����/����
 
�л��� ���� �Է� �ް� �� 5������ ��� ���� 

�Է�: ù ��° �л� ������ ���� �Է� (�̸� ����) 

����: �� �������� �Էµ� �л� ���� ����

���: ������� �Էµ� ��� �л��� ���� ���

����: �л��� ��ȣ�� �Է� �޾� �����ϱ� 

����: ���α׷� ���� 
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
		printf("�迭�� �������� �Է� �Ұ�!\n");
	} else {
		printf("�̸��Է�: ");
		scanf("%s", &s[index].name);
		printf("�����Է�: ");
		scanf("%d", &s[index].score);
		s[index].num = 1001 + index;
		index++;
	}
	*nn = index;
}
void del(int *nn, STU *s){
	int index = *nn;
	if(index == 0){
		printf("������ ������ ����!\n");
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
		printf("����� ������ ����!\n");
	} else {
		for(int i = 0; i < index; i++){
			printf("%d�� %s: %d\n", s[i].num, s[i].name, s[i].score);
		}
	}
}
void update(int *nn, int *num, STU *s){
	int index = *nn;
	int nnum = 0;
	
	printf("������ �л��� ��ȣ �Է�: ");
	scanf("%d", &nnum); 
	int i;
	for(i = 0; i < index; i++){
		if(s[i].num == nnum){
			printf("�̸��Է�: ");
			scanf("%s", &s[i].name);
			printf("�����Է�: ");
			scanf("%d", &s[i].score);
		}
	}
	if(i == index){
		printf("�������� �ʴ� �л��Դϴ�!\n");
	}
	
	*num = nnum;
	*nn = index;
}
//void end();

int main(){
	int n = 0; //�л��� �� 
	int nn = 0; //���� �Էµ� �л��� �� 
	STU *s;
	char menu[50] = "1.�Է� 2.���� 3.��� 4.���� 5.����";
	int end = 0; //���� 
	
	printf("�л� �ο� ��: ");
	scanf("%d", &n);
	
	s = (STU *) calloc(n, sizeof(STU));
	
	while(true){
		int option = 0;
		printf("--------------------------\n");
		printf("%s\n", menu);
		printf("--------------------------\n");

		printf("��ȣ�Է�: ");
		scanf("%d", &option);
		int nnum = 0;
		switch(option){
		case 1: //�Է� 
			insert(&nn, n, s);
			break;
		case 2: //���� 
			del(&nn, s);
			break;
		case 3: //���
			show(&nn, s);
			break;
		case 4: // ����
			if(nn == 0) {
				printf("������ ������ ����!\n");
				break;
			}
			update(&nn, &nnum, s);
			break;
		case 5:
			end = 1;
			break;
		}
		
		if(end) {
			printf("���α׷� ����! \n");
			break;
		}
	}
	
	
	
	return 0;
}
