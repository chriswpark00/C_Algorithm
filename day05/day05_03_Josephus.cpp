#include <stdio.h>
#include <stdlib.h>

typedef struct NODE{
	int data;
	struct NODE *next;
}N;

void create(N * root, int n){
	N * first;
	for(int i = 0; i < n; i++){
		N * node = (N *) calloc(1, sizeof(N));
		node->data = i + 1;
		node->next = NULL;
		root->next = node;
		root=root->next;
		
		
		if(i == 0){
			first = root;
		} else if(i == n - 1){
			root->next = first;
		}
	}
	
	
}

void remove(N *root, int data){
	N *p = root;
	while(1){
		if(p->next->data == data){
			p->next = p->next->next;
			return;
		} else{
			printf("else¹®\n");
			p= p->next;
		}
		
	}
	
}
int main(){
	int n = 0, k = 0;
	scanf("%d%d", &n, &k);
	N * head = (N *) calloc(1, sizeof(N));
	create(head, n);
	
	////////////////////////
	int cnt = 1;
	int death = 0;
	N *p = head->next; // 1
	while(death != n){
		N *pp = p->next; // 5
		if(cnt == k){ // k = 4
			printf("%d ", p->data);
			int data = p->data;
			remove(p, data);
			death++;
			p = pp;
			cnt = 1;
			continue;
		}
		p = p->next; // 4
		cnt++; // 4
	}	
		
	
	return 0;
}
