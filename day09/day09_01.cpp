// 트리 -> 노드들의 집합. 자식이 2개인 트리 == 이진트리 == binary tree

// 사이클 x
// 최상위 노드 == 루트 노드 : 부모노드가 없는 노드
// 최하위 노드 == 리프 노드 : 자식노드가 없는 노드

/*
전위/중위/후위 순회

예시)
										1
					2										3
		4					5					6						7
	8		9			10		11			12		13				14		15

전위 순회 
1 2 4 8 9 5 10 11 3 6 12 13 7 14 15

중위 순회 
8 4 9 2 10 5 11 1 12 6 13 3 14 7 15

후위 순회
8 9 4 10 11 5 2 12 13 6 14 15 7 3 1 

예시2)
										10
					2										14
		1					3					13						16
		
전위 순회
10 2 1 3 14 13 16

중위 순회
1 2 3 10 13 14 16

후위 순회
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
// 루트 노드 : 1 패턴(index 1)에 한번도 안나타난 스킬 명 cnt++
// 리프 노드 : 2 4 5 6 패턴(index 0)에 한번도 안나타난 스킬 명
// 루트의 자식 찾기: index 0에 1이 들어온 index 1의 스킬 명 2 3 cnt++ x 2
// 2의 자식 찾기: 없음 
// 3의 자식 찾기: 456 cnt = 6 return; break;

				1(44)
			2(11) 		3(33)
				4(11) 	5(11) 	6(11)
	3
1    	2				

2 4 5 6 3 1
// 각 리프노드부터 루트노드까지
// 2 에서 1까지
// 4에서 1까지
// 5에서 1까지
// 6에서 1까지

// 최대레벨 == 11
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

//트리 노드 삭제할때 고려해야할 것
/*
1. 데이터가 없을 경우
	삭제 액션 전에 NULL을 만났을 때
2. 리프노드를 삭제 할 경우
	자신의 부모노드 + 자신이 있는 방향
3. 하나의 서브트리를 가진 경우
	자기의 자식을 자신으로 만들고,
	자기부모가 자신을 보도록 함.
4. 두개의 서브트리를 가진 경우
	1) 오른쪽 서브트리에서 가장 작은 값min을 찾는다.
	2) 왼쪽 자식이 없을 때 까지 아래로 방문
	3) min을 삭제노드에 대입
	4) min의 이전 노드 NULL 처리 
*/ 
void del(n* node, int data){
	n *c = node; //현재child 
	n *p; //부모parent
	while(c != NULL && c->data != data){
		p = c;
		c = data < p->data ? p->left : p->right;
	}
	
	//1
	if(c == NULL){
		printf("해당 데이터 없음! \n");
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
		if (c->data==node->data){ // 삭제노드가 루트노드인경우 추가 
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
		
		if(c == subp){ //while문에 안들어갔을 경우 
			c->right = sub->right;
		} else{
			subp->left = sub->right; // sub->right은 NULL일 수도 값이 있을 수도 있음.
			/*
			왼쪽 끝까지 온 노드(가장작은 노드)에
			오른쪽 자식이 붙어있을 가능성
			-> 사라질 본인 자리에 오른쪽자식 붙이기 
			*/ 
		}
			c->data = sub->data; //삭제한 노드에 min값 대입 		
	}
} 
////////////////////////////////////////
int main(){
	n *root = NULL;
	int act;
	while(1){
		printf("1.노드 생성 2.전위순회 3.중위순회 4.후위순회 5.삭제 6.종료\n");
		scanf("%d", &act);
		
		int data;
		int exit = 0;
		switch(act){
			case 1:
				printf("정수 입력: ");
				scanf("%d", &data);
				root = create(root, data);
				break;
			case 2: //전위순회 
				printf("전위 순회: ");
				preorder(root);
				printf("\n");
				break;
			case 3: //중위순회
				printf("중위 순회: "); 
				inorder(root);
				printf("\n");
				break;
			case 4: //후위순회 
				printf("후위 순회: ");
				postorder(root);
				printf("\n");
				break;
			case 5: //삭제
			
				printf("정수 입력: ");
				scanf("%d", &data);
				del(root, data);
				break;
			case 6:
				printf("종료\n");
				exit = 1;
				break;
		}
		
		if(exit) break;
	}
}
