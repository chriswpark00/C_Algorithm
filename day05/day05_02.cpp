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
		// 루트의 끝자락이 NULL일때까지 while()반복하여
		// 맨끝에(NULL자리에) 새로운 노드를 추가해야함!! 
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
		// 루트의 끝자락이 NULL일때까지 while()반복하여
		// 맨끝에(NULL자리에) 새로운 노드를 추가해야함!! 
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
	//방문용 포인터
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
		printf("%d 삭제 ", p->data);
		free(p);
		p = pp;
	}
}
int main(){
	N * head = (N *) calloc(1, sizeof(N));
	
	int act;
	while(1){
		printf("1. 삽입 2. 삭제 3. 출력 4. 종료 \n");
		scanf("%d", &act);
		int data = 0;
		int exit = 0;
		/*
			현재 입력한 순서대로 입력 받는중.
			변경 사항: 
				입력: 
			1. 오름차순으로 입력 될 수 있도록
			2. 중복입력 불가
			
				삭제:
			1. 업는 데이터 삭제중입니다! 수행할 수 없습니다! 띄우기
			
				출력:
			1. 10->20->30->40		 
		*/
		switch(act){
			case 1:
				printf("정수 입력 : ");
				scanf("%d", &data);
				add(head, data);
				printf("head:data %d\n", head->data);
				break;
			case 2:
				printf("정수 입력: ");
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
