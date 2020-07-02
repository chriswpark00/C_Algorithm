/*
����Ʈ�� ����

 			a
 		b		c
1. ��� �Ѱ��� �ҹ��� ���ĺ� 1�� (�ƽ�Ű�ڵ� ���� �������ڴ� left, ū���ڴ� right)
2. ������ȸ���ĺ� 	abc
3. ���� ��ȸ		bac
4. ������ȸ			bca
5. ���ڿ� 3���Է� -> 0, 10, 20, 30��
	aaa
	abc (+10)
	bca (+10)
	�� ��: 20�� 
*/
/*
c������ ���ڿ� Ÿ�� ���� ����
���� ���ڹ迭 +'\0' = ���ڿ� 
 
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	char data;
	struct node * left;
	struct node * right;
}n;

char pre [10];
char in [10];
char post[10];
int cnt = 0;

n* insert(n* node, int data){
	if(node == NULL){
		node = (n *) malloc(sizeof(n));
		node->data = data;
		node->left = NULL;
		node->right = NULL;
	} else{
		if(node->data > data){
			node->left = insert(node->left, data);
		}else{
			node->right = insert(node->right, data);
		}
	}
	
	return node;
}

void preorder(n* node){
	if(node != NULL){
		printf("%c ", node->data);
		pre[cnt] = node->data;
		cnt++;
		preorder(node->left);
		preorder(node->right);
	}
}

void inorder(n* node){
	if(node != NULL){
		inorder(node->left);
		printf("%c ", node->data);
		in[cnt] = node->data;
		cnt++;
		inorder(node->right);
	}
}

void postorder(n* node){
	if(node != NULL){
		postorder(node->left);
		postorder(node->right);
		printf("%c ", node->data);
		post[cnt] = node->data;
		cnt++;
	}
}
int main(){
	n* root = NULL;
	
	char pre [10];
	int act;
	while(1){
		printf("1.���� 2.������ȸ 3.������ȸ 4.������ȸ 5.���ڿ� �Է� 6.����: ");
		scanf("%d", &act);
		
		char data;
		int exit = 0;
		switch(act){
			case 1: //insert
				scanf(" %c", &data);
				root = insert(root, data);
				break;
			case 2: //preorder
				cnt = 0;
				preorder(root);
				printf("\n");
				break;
			case 3: //inorder
				cnt = 0;
				inorder(root);
				printf("\n");
				break;
			case 4: //postorder
				cnt = 0;
				postorder(root);
				printf("\n");
				break;
			case 5: //quiz
				printf("%s, %s, %s\n", pre, in, post);
				break;
			case 6: //exit
				exit = 1;
				break;
		}
		
		if(exit) {
			printf("����\n");
			break;
		}
	}
}
