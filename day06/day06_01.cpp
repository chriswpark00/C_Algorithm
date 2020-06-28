/*
자료 구조
배열, 구조체, 연결리스트
스택, 큐 

1. stack/스택
후입 선출  -> 대기열, 순서프로그램, 예약제 xxx

주로 사용처
=> 인터넷 방문기록, 실행 취소 등

데이터의 통로가 1개 : 한쪽 끝에서만 자료를 넣거나 뺄수있음
=> 선형 구조 
=> LIFO 
배열 통해서 구현

-> push() : 데이터 입력
-> pop() : 데이터 출력 (출력후 데이터 삭제) 
-> peek() / top() : 데이터 출력 (출력후에도 데이터가 삭제되지 않음) 

full(), empty(), size() / level() : 현재 스택의 수위를 보는 함수 
-> full(), empty() : 동적이기 때문에 차있거나 비어있는지 확인하는 함수.
-> size() / level() : 배열의 길이
 
2. queue/큐 
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 10 
// 기호 상수 MAX 사용: 자주쓰이거나 자주 바뀌는 상수에 이용 
int stack[MAX];
int index = -1;

int isFull(){
	if(index == MAX - 1) return 1;
	
	return 0;
}

int isEmpty(){
	if(index == -1) return 1;
	return 0;
}

void push(int data){
	if(isFull()){ // 가득 찬 경우 full 
		printf("가득차서 입력 불가!\n");
		return;
	} 
	index++;
	stack[index] = data;
	
}

int pop(){
	return stack[index--];
}

int peek(){
	return stack[index];
}

int size(){
	return index + 1;
}
int main (){
	int act;
	while(1){
		printf("1.push() 2.pop() 3.peek() 4.size() 5.종료()\n");
		scanf("%d", &act);
		
		int n;
		int exit = 0;
		switch(act){
			case 1: // push()
			printf("데이터 입력 : ");
			scanf("%d", &n);
			push(n);
				break;
			case 2: // pop()
				if(isEmpty()){
					printf("텅비어서 pop() 수행불가!\n");
					break;
				}
				printf("pop()수행 %d \n", pop());
				break;
			case 3: // peek() / top()
				if(isEmpty()){
					printf("텅비어서 top() 수행불가!\n");
					break;
				}
				printf("top()수행 %d \n", peek());
				break;
			case 4: // size()
				printf("size() : 스택의 데이터 개수는 %d개 입니다.\n", size());
				break;
			case 5:
				exit = 1;
				break;
		}
		if(exit) break;
	}
	return 0;
}


