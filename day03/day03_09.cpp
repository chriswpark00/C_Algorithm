/*
�л��� ���� �Է¹ް�
�л����� �̸��� ������ ������ �Է¹޴´�
�� �л��� �̸��� ��� ������ ����ϼ���
 
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
	printf("�ο��� : ");
	scanf("%d", &n);
	s = (S *) calloc(n, sizeof(S));
	
	strcpy(s[0].name, "a");strcpy(s[1].name, "b");strcpy(s[2].name, "c");
	for(int i = 0; i < n; i++){
		printf("��/��/�� ���� �Է�:");
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


