/*
이진트리 문제

 			a
 		b		c
1. 노드 한개당 소문자 알파벳 1개 (아스키코드 기준 작은숫자는 left, 큰숫자는 right)
2. 전위순회알파벳 	abc
3. 중위 순회		bac
4. 후위순회			bca
5. 문자열 3번입력 -> 0, 10, 20, 30점
	aaa
	abc (+10)
	bca (+10)
	총 점: 20점 
*/
/*
c언어에서느 문자열 타입 따로 없음
따라서 문자배열 +'\0' = 문자열 
 
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
		printf("1.생성 2.전위순회 3.중위순회 4.후위순회 5.문자열 입력 6.종료: ");
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
			printf("종료\n");
			break;
		}
	}
}
