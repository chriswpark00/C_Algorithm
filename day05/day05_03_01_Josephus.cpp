#include <stdio.h>
#include <stdlib.h>

typedef struct NODE{
	int data;
	struct NODE *next;
}N;

void create(N * root, int data){
	N * node = (N *) calloc(1, sizeof(N));
	node->data=data;
	node->next=NULL;
	N *p=root;
	while(p->next != NULL){
		p = p->next;
	}
	
	p->next = node;
	return;
}

void create_last(N *root, int data){
	N * node = (N *) calloc(1, sizeof(N));
	node->data=data;
	node->next=NULL;
	N *p=root;
	while(p->next != NULL){
		p = p->next;
	}
	
	p->next = node;
	node->next = root->next; // 7 -> 1
	return;
}

void show(N *root){
	printf("\nshow: ");
	int n = 0;
	N *p = root->next;
	while(p!=NULL){
		printf("%d ", p->data);
		p=p->next;
		n++;
		if(n == 50) break;
	}
	printf("Á¾·á\n");
}

void remove(N *root, int data){
	N *p = root;
	while(1){
		if(p->next->data == data){
			p->next = p->next->next;
			return;
		} else{
			p= p->next;
		}
		
	}
	
}
int main(){
	int n = 0, k = 0;
	scanf("%d%d", &n, &k);
	N * head = (N *) calloc(1, sizeof(N));
	head->next = NULL;
	
	for(int i = 0; i < n - 1; i++){
		create(head, i+1);
	}
	create_last(head, n);
	
	show(head);
	////////////////////////
	
	N *p = head;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < k; j++){
			p = head;
			head = head->next;
		}
		
		printf("%d ", head->data);
		p->next = head->next;
	}
		
	
	return 0;
}
