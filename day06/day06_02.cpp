/*
 
STACK 연습 문제

예시:
push 1
pop
[1 데이터가 pop()됨]
push 2
push 3
top
[3 데이터가 top() 됨]
size
[현재 size() : 2]
Q
[종료] 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 3

int stack[MAX];
int index = 0;

int isEmpty(){
	if(index == 0) return 1;
	return 0;
}

int isFull() {
	if(index == MAX) return 1;
	return 0;
}

void push(int data){
	stack[index] = data;
	index++;
}

int pop() {
	return stack[--index];
}

int top() {
	return stack[index - 1];
}

int size(){
	return index;
}

int main(){
	while(1){
		char str [10];
		int data;
		scanf("%s", str);
		
		if(!strcmp(str, "push")){
			scanf("%d", &data);
			if(isFull()) {
				printf("FULL\n");
				continue;
			}
			push(data);
		} else if (!strcmp(str, "pop")){
			if(isEmpty()) {
				printf("EMPTY\n");
				continue;
			}
			
			printf("[%d 데이터가 pop() 됨]\n", pop());
			
		} else if (!strcmp(str, "top")){
			if(isEmpty()) {
				printf("EMPTY\n");
				continue;
			}
			
			printf("[%d 데이터가 top() 됨]\n", top());
		} else if (!strcmp(str, "size")){
			printf("[데이터의 개수: %d]\n", size());
		} else if (!strcmp(str, "Q")){
			printf("프로그램 종료.\n");
			return 0;
		} else{
			printf("잘못 입력. \n");
		}
		
	}
	
	return 0;
}

