#include <stdio.h>
#include <stdlib.h>
/*
 �ο��� �Է¹ް�
 
 �̸� �� ������ �Է¹ް�
 
 ���:
 	�̸�: -- �� 
  
*/
typedef struct{
	char name[10];
	int score;
}S;

void show(S *s, int l){
	for(int i = 0; i < l; i++){
		printf("%s: %d��\n", s[i].name, s[i].score);
	}
}
