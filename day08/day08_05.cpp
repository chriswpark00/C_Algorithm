/*
���� ����:
�迭, ����ü, ���Ḯ��Ʈ, ����, ť, ����x4, ž��

Ʈ�� == ������ ����. ����Ŭ�� ����! 
��Ʈ ���:root == �θ��尡 ���� ���
���� ���:leaf == �ڽĳ�尡 ���� ���

Binary Tree == ����Ʈ�� == �ڽ��� 2���� Ʈ��

������� ������ ����Ʈ���� ��������Ʈ����� �θ� 


����)
 ��Ʈ ���� �Է¹ް�
 ���� �Է°��� ������ left�� ũ�� right�� �� �Է�
 root : 10
 n1 = 5;
 n2 = 6;
 
 				10
		5
	 		6
*/


#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node *left;
	struct node *right;
}n;

int main(){
	int data;
	scanf("%d", &data);
	n *root = (n *)calloc(1, sizeof(n));
	root->data = data;
	root->left = NULL;
	root->right = NULL;
	
	scanf("%d", &data);
	n *n1 = (n *)calloc(1, sizeof(n));
	n1->data = data;
	n1->left = NULL;
	n1->right = NULL;
	
	if(root->data > n1->data){
		root->left = n1;
	} else{
		root->right = n1;
	}

	scanf("%d", &data);
	n *n2 = (n *)calloc(1, sizeof(n));
	n2->data = data;
	n2->left = NULL;
	n2->right = NULL;
	
	int sw;
	n *p = root;
	n *pp;
	while(p != NULL){
		pp = p;
		if(p->data > n2->data){
			p = p->left;
			sw = 1;
		} else{
			p = p->right;
			sw = 2;
		}
	}
	if(sw==1){
		pp->left = n2;
	} else if(sw==2){
		pp->right = n2;
	}
	
	// 10-5-3
//	printf("%d %d %d", root->data, root->left->data, root->left->left->data);
	// 10-5-7
//	printf("%d %d %d", root->data, root->left->data, root->left->right->data);
	// 10-5-15
	printf("%d %d %d", root->data, root->left->data, root->right->data);
	
	return 0;
}
