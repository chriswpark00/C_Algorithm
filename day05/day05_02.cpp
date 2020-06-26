#include <stdio.h>
#include <stdlib.h>
typedef struct NODE{
	int data;
	struct NODE * next;
}N;

void add(N *root, int data){
	N * node = (N *) calloc(1, sizeof(N));
	node->data = data;
	node->next = NULL;
	
	while(root->next != NULL){
		// ��Ʈ�� ���ڶ��� NULL�϶����� while()�ݺ��Ͽ�
		// �ǳ���(NULL�ڸ���) ���ο� ��带 �߰��ؾ���!! 
		root = root->next;
	}
	
	printf("head:data: %d\n", root->data); 
	root->next = node;
}
void add2(N *root, int data){
	N * node = (N *) calloc(1, sizeof(N));
	node->data = data;
	node->next = NULL;
	
	N *p = root;
	while(p->next != NULL){
		// ��Ʈ�� ���ڶ��� NULL�϶����� while()�ݺ��Ͽ�
		// �ǳ���(NULL�ڸ���) ���ο� ��带 �߰��ؾ���!! 
		p = p->next;
	}
	
	p->next = node;
}
void remove(N *root, int data){
	N *p = root;
	while(p->next!=NULL){
		if(p->next->data == data){
			p->next = p->next->next;
			break;
		} else{
			p = p->next;
		}
	}
}
show(N *root){
	//�湮�� ������
	N *p = root->next; 
	while(p != NULL){
		printf("%d ", p->data);
		p = p->next;
	}
	
	printf("\n");
}

freee(N * root){
	N *p = root->next;
	while(p!=NULL){
		N *pp = p->next;
		printf("%d ���� ", p->data);
		free(p);
		p = pp;
	}
}
int main(){
	N * head = (N *) calloc(1, sizeof(N));
	
	int act;
	while(1){
		printf("1. ���� 2. ���� 3. ��� 4. ���� \n");
		scanf("%d", &act);
		int data = 0;
		int exit = 0;
		/*
			���� �Է��� ������� �Է� �޴���.
			���� ����: 
				�Է�: 
			1. ������������ �Է� �� �� �ֵ���
			2. �ߺ��Է� �Ұ�
			
				����:
			1. ���� ������ �������Դϴ�! ������ �� �����ϴ�! ����
			
				���:
			1. 10->20->30->40		 
		*/
		switch(act){
			case 1:
				printf("���� �Է� : ");
				scanf("%d", &data);
				add(head, data);
				printf("head:data %d\n", head->data);
				break;
			case 2:
				printf("���� �Է�: ");
				scanf("%d", &data);
				remove(head, data);
				break;
			case 3:
				show(head);
				break;
			case 4:
				exit = 1;
				break;
		}
		if(exit) break;
	}
	
	freee(head);
} 
