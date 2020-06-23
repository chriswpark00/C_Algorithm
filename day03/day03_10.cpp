#include <stdio.h>
#include <stdlib.h> //calloc malloc
#include <string.h> //strcpy
/*
ù �Է�: ��� �ο���
�� ����� ��ȣ�� 1001 ���� ���� : 1001, 1002, 1003 ...

�� ��° �Է�: �� ����� �̸��� ���� �Է� �ޱ�

ù��° ���: �� ����� �����ȣ / �̸� / ���� ���
 
�� ��° �Է�: ���ѳ��� �Է�

�� ��° ���: ù ��° ��°� ���������� ���ѳ��� �̻��� �����ϰ� ��� 
*/

typedef struct {
	int num;
	char name[10];
	int age;
}W;

void show(W *w, int length, int minAge){
	printf("--------------------------\n");
	printf("�����ȣ\t����̸�\t�������\n");
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
	int n = 0; //��� ��
	W *w;
	int minAge;
	printf("�ο��� : ");
	scanf("%d", &n);
	w = (W *) calloc(n, sizeof(W));
	for(int i = 0; i < n; i++){
		printf("�����ȣ%d�� �����Է�: ", 1001 + i);
		scanf("%d", &w[i].age);
		printf("�����ȣ%d�� �̸��Է�: ", 1001 + i);
		scanf("%s", &w[i].name);
		w[i].num = 1001 + i;
	}
	show(w, n, -1);
	printf("���� ���� �Է�: ");
	scanf("%d", &minAge);
	
	show(w, n, minAge);
	return 0;
}

