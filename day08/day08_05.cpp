/*
현재 진도:
배열, 구조체, 연결리스트, 스택, 큐, 정렬x4, 탑색

트리 == 노드들의 집합. 사이클이 없다! 
루트 노드:root == 부모노드가 없는 노드
리프 노드:leaf == 자식노드가 없는 노드

Binary Tree == 이진트리 == 자식이 2개인 트리

순서대로 가득찬 이진트리를 완전이진트리라고 부름 


예시)
 루트 값을 입력받고
 다음 입력값이 작으면 left에 크면 right에 값 입력
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
