/*
���ȭ ���α׷���.
������� �и� 
- �Լ��� ����ü�� �и� 
*/
#include "day04_01_header.h"


/*
 �ο��� �Է¹ް�
 
 �̸� �� ������ �Է¹ް�
 
 ���:
 	�̸�: -- �� 
  
*/


int main() {
	int n = 0;
	S *s;
	printf("�ο���: ");
	scanf("%d", &n);
	
	s = (S *) calloc(n, sizeof(S));
	for(int i = 0; i < n; i++){
		printf("�̸�: ");
		scanf("%s", s[i].name); //%s�� &���� �Է¹��� 
		printf("����: ");
		scanf("%d", &s[i].score);
	}
	
	show(s, n);
	
	
	return 0;
} 
 
