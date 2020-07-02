// Ʈ�� -> ������ ����. �ڽ��� 2���� Ʈ�� == ����Ʈ�� == binary tree

// ����Ŭ x
// �ֻ��� ��� == ��Ʈ ��� : �θ��尡 ���� ���
// ������ ��� == ���� ��� : �ڽĳ�尡 ���� ���

/*
����/����/���� ��ȸ

����)
										1
					2										3
		4					5					6						7
	8		9			10		11			12		13				14		15

���� ��ȸ 
1 2 4 8 9 5 10 11 3 6 12 13 7 14 15

���� ��ȸ 
8 4 9 2 10 5 11 1 12 6 13 3 14 7 15

���� ��ȸ
8 9 4 10 11 5 2 12 13 6 14 15 7 3 1 

����2)
										10
					2										14
		1					3					13						16
		
���� ��ȸ
10 2 1 3 14 13 16

���� ��ȸ
1 2 3 10 13 14 16

���� ��ȸ
1 3 2 13 16 14 10 
*/
#include <stdio.h>
#include <stdlib.h>
typedef struct node {
	int data;
	struct node *left;
	struct node *right;
}n;

n* create(n *node, int data){
	if(node == NULL){
		node = (n *) malloc(sizeof(n));
		node->data = data;
		node->left = NULL;
		node->right = NULL;
	} else{
		if(node->data > data){
			node->left=create(node->left, data);
		} else{
			node->right=create(node->right, data);
		}
	}
	return node;
}

void preorder(n * node){
	if(node != NULL){
		printf("%d ", node->data);
		preorder(node->left);
		preorder(node->right);
	}
}

/*
[[1, 2][1, 3][3, 4][3, 5][3, 6]]

cnt = 0;
// ��Ʈ ��� : 1 ����(index 1)�� �ѹ��� �ȳ�Ÿ�� ��ų �� cnt++
// ���� ��� : 2 4 5 6 ����(index 0)�� �ѹ��� �ȳ�Ÿ�� ��ų ��
// ��Ʈ�� �ڽ� ã��: index 0�� 1�� ���� index 1�� ��ų �� 2 3 cnt++ x 2
// 2�� �ڽ� ã��: ���� 
// 3�� �ڽ� ã��: 456 cnt = 6 return; break;

				1(44)
			2(11) 		3(33)
				4(11) 	5(11) 	6(11)
	3
1    	2				

2 4 5 6 3 1
// �� ���������� ��Ʈ������
// 2 ���� 1����
// 4���� 1����
// 5���� 1����
// 6���� 1����

// �ִ뷹�� == 11
// 2->level += 11;
// 1->level += 11;
// 4->level += 11;
// 3->level += 11;
// 1->level += 11;
// 5->level += 11;
 
			
n* root = (n *) malloc();
root->skill = 1;
root->level = 0;
root->n = NULL; 
				1()
			2(11) 3()
				4(11) 5(11) 6(11)


*/

void inorder(n * node){
	
	if(node != NULL){
		inorder(node->left);
		printf("%d ", node->data);
		inorder(node->right);
	}
	
//	if(node->left != NULL){
//		inorder(node->left);
//		
//	} else{
//		printf("%d ", node->left);
//	}
} 

void postorder(n* node){
	if(node != NULL){
		postorder(node->left);
		postorder(node->right);
		printf("%d ", node->data);
	} 
}

//Ʈ�� ��� �����Ҷ� ����ؾ��� ��
/*
1. �����Ͱ� ���� ���
	���� �׼� ���� NULL�� ������ ��
2. ������带 ���� �� ���
	�ڽ��� �θ��� + �ڽ��� �ִ� ����
3. �ϳ��� ����Ʈ���� ���� ���
	�ڱ��� �ڽ��� �ڽ����� �����,
	�ڱ�θ� �ڽ��� ������ ��.
4. �ΰ��� ����Ʈ���� ���� ���
	1) ������ ����Ʈ������ ���� ���� ��min�� ã�´�.
	2) ���� �ڽ��� ���� �� ���� �Ʒ��� �湮
	3) min�� ������忡 ����
	4) min�� ���� ��� NULL ó�� 
*/ 
void del(n* node, int data){
	n *c = node; //����child 
	n *p; //�θ�parent
	while(c != NULL && c->data != data){
		p = c;
		c = data < p->data ? p->left : p->right;
	}
	
	//1
	if(c == NULL){
		printf("�ش� ������ ����! \n");
		return;
	}
	//2
	if(c->left == NULL && c->right == NULL){
		if(p->left == c){
			p->left = NULL;
		} else{
			p->right = NULL;
		}
	}//3
	else if(c->left == NULL || c->right == NULL){
		if (c->data==node->data){ // ������尡 ��Ʈ����ΰ�� �߰� 
			if(c->left!=NULL){
				c->data=c->left->data;
				c->left=c->left->left;
				c->right=c->left->right;
			}
			else{
				c->data=c->right->data;
				c->left=c->right->left;
				c->right=c->right->right;
			}
		}
		else if(p->left == c){
			c = c->left == NULL ? c->right : c->left;
			p->left = c;
		} else{
			c = c->left == NULL ? c->right : c->left;
			p->right = c;
		}
	}//4
	else{
		n *subp = c;
		n *sub = c->right;
		while(sub->left != NULL){
			subp = sub;
			sub = sub->left;
		}
		
		if(c == subp){ //while���� �ȵ��� ��� 
			c->right = sub->right;
		} else{
			subp->left = sub->right; // sub->right�� NULL�� ���� ���� ���� ���� ����.
			/*
			���� ������ �� ���(�������� ���)��
			������ �ڽ��� �پ����� ���ɼ�
			-> ����� ���� �ڸ��� �������ڽ� ���̱� 
			*/ 
		}
			c->data = sub->data; //������ ��忡 min�� ���� 		
	}
} 
////////////////////////////////////////
int main(){
	n *root = NULL;
	int act;
	while(1){
		printf("1.��� ���� 2.������ȸ 3.������ȸ 4.������ȸ 5.���� 6.����\n");
		scanf("%d", &act);
		
		int data;
		int exit = 0;
		switch(act){
			case 1:
				printf("���� �Է�: ");
				scanf("%d", &data);
				root = create(root, data);
				break;
			case 2: //������ȸ 
				printf("���� ��ȸ: ");
				preorder(root);
				printf("\n");
				break;
			case 3: //������ȸ
				printf("���� ��ȸ: "); 
				inorder(root);
				printf("\n");
				break;
			case 4: //������ȸ 
				printf("���� ��ȸ: ");
				postorder(root);
				printf("\n");
				break;
			case 5: //����
			
				printf("���� �Է�: ");
				scanf("%d", &data);
				del(root, data);
				break;
			case 6:
				printf("����\n");
				exit = 1;
				break;
		}
		
		if(exit) break;
	}
}
