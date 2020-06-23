#include <stdio.h>
#include <stdlib.h>
typedef struct {
	int score;
	int grade;	
}S;

/*
�л� 5���� ������ ���� �Է� �ް�
���(grade)�� ����ϰ�
��� ������������ ���� ��� ���ּ���

ex) 
�Է� : 60 20 30 40 50
���: 5 1 2 3 4	/ 60 50 40 30 20
*/

int main() {
	int n;
	printf("�ο��� : ");
	scanf("%d", &n);
	S *s = (S *) calloc(n, sizeof(S));
	
	for(int i = 0; i < n; i++){
		printf("�л�%d ���� : ", i + 1);
		scanf("%d", &s[i].score);
		s[i].grade = 1; // �ʱ� ��� 1������ ���� 
	}
	// �� ������ ��� �������� ���� �� ����� 1 �������ش�
	for(int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if(s[i].score < s[j].score){
				s[i].grade++;
			}
		}
	} 
	
	for(int i = 0; i < n; i++){
		printf("�л� %d�� ���: %d\n", i + 1, s[i].grade);
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


