// �л� 5��, ���� 3�� ���� �Է¹޾�
// ��� .2�Ҽ������� �� �̸��� ����ϼ���

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
	printf("�л��ο� �� : ");
	scanf("%d", &n);
	 
	S s[n];
	
	for(int i = 0; i < n; i++){
		printf("�̸�: ");
		scanf("%s", &s[i].name);
		
		printf("������ ����: ");
		scanf("%d%d%d", &s[i].kor, &s[i].eng, &s[i].math);
		
		s[i].avg = (s[i].kor + s[i].eng + s[i].math) / 3.0;
	}
	
	for(int i = 0; i < n; i++){
		printf("�л� �̸�: %s, ��� ����: %.2lf\n", s[i].name, s[i].avg);
	}
	
	return 0;
}
