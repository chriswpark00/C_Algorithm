/*
�ڷ� ����
�迭, ����ü, ���Ḯ��Ʈ
����, ť 

1. stack/����
���� ����  -> ��⿭, �������α׷�, ������ xxx

�ַ� ���ó
=> ���ͳ� �湮���, ���� ��� ��

�������� ��ΰ� 1�� : ���� �������� �ڷḦ �ְų� ��������
=> ���� ���� 
=> LIFO 
�迭 ���ؼ� ����

-> push() : ������ �Է�
-> pop() : ������ ��� (����� ������ ����) 
-> peek() / top() : ������ ��� (����Ŀ��� �����Ͱ� �������� ����) 

full(), empty(), size() / level() : ���� ������ ������ ���� �Լ� 
-> full(), empty() : �����̱� ������ ���ְų� ����ִ��� Ȯ���ϴ� �Լ�.
-> size() / level() : �迭�� ����
 
2. queue/ť 
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 10 
// ��ȣ ��� MAX ���: ���־��̰ų� ���� �ٲ�� ����� �̿� 
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
	if(isFull()){ // ���� �� ��� full 
		printf("�������� �Է� �Ұ�!\n");
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
		printf("1.push() 2.pop() 3.peek() 4.size() 5.����()\n");
		scanf("%d", &act);
		
		int n;
		int exit = 0;
		switch(act){
			case 1: // push()
			printf("������ �Է� : ");
			scanf("%d", &n);
			push(n);
				break;
			case 2: // pop()
				if(isEmpty()){
					printf("�ֺ� pop() ����Ұ�!\n");
					break;
				}
				printf("pop()���� %d \n", pop());
				break;
			case 3: // peek() / top()
				if(isEmpty()){
					printf("�ֺ� top() ����Ұ�!\n");
					break;
				}
				printf("top()���� %d \n", peek());
				break;
			case 4: // size()
				printf("size() : ������ ������ ������ %d�� �Դϴ�.\n", size());
				break;
			case 5:
				exit = 1;
				break;
		}
		if(exit) break;
	}
	return 0;
}


