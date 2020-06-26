#include <stdio.h>
#include <stdlib.h>
typedef struct NODE{
	int data;
	struct NODE * next;
}N;


void add(N *root, int data){
	N *p = root;
	while(p->next !=NULL){
		if(data > p->next->data){
			p = p->next;
			continue;
		} else if(data == p->next->data){
			printf("�ߺ��Է� �Ұ���!\n");
			return;
		} else{
			N * node = (N *) calloc(1, sizeof(N));
			node->data = data;
			node->next = NULL;
			node->next = p->next;
			p->next = node;
			return;
		}
	}
	
	N * node = (N *) calloc(1, sizeof(N));
	node->data = data;
	node->next = NULL;
	p->next = node;
}

void remove(N *root, int data){
	N *p = root;
	while(p->next!=NULL){
		if(p->next->data == data){
			p->next = p->next->next;
			printf("%d���� �Ϸ�\n", data);
			return;
		} else{
			p = p->next;
		}
	}
	printf("���� ���� ������... �ٽ� �Է� �ٶ�\n");
}
show(N *root){
	//�湮�� ������
	N *p = root->next; 
	while(p != NULL){
		if(p->next == NULL){
			printf("%d", p->data);
		} else{
			printf("%d->", p->data);
		}
		
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
