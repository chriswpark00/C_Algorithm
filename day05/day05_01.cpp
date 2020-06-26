/*
���� ����Ʈ ��ũ�帮��Ʈ / Linked List

�ڷᱸ���� �� ���� - �迭, ����ü

����ü�� �̿��ؼ� ����(�ϳ��� �����Ͱ� �ΰ��̻��� ����(�ڷ����� �ٸ� ����)�� �����ֱ� ����)

typedef struct NODE{
	int data; 
	struct NODE *next; // ����� ���� �������� �ּҰ� 
						// �ּҺ� => �����͸� ����ϴ� ����:
									�����ϰ��ִ� �����ʹ� �ּ�(&)�̱⶧���� *(������)�� �޾ƾ���! 
}N;

Linked List ����ϴ� ����?
�迭�� �������� 1������ a���ְ�, 2������ b�� �ְ�, 3������ c�� �ִ�. 
 ����, ����/������ ��ƴ�. ��, �����̴�. ũ�Ⱑ �����Ǿ��ִ�.

�ݸ鿡 Linked List/���� ����Ʈ�� ��������
a��� ������ �������� b�� �ִ�. (a�� �˰�����)(b�� �տ� a���ִٴ� ����� ��)
b��� ������ �������� c�� �ִ�. (������ a�� b������ c�� �ִٴ� ����� ��)
�׷��� Linked List�� ����ϴ� ����?
1. ���� ȿ���� ����
2. ���� ������ ����(�����ϴ�.)

����:
1. �ڴ��� �Ű����ϴ� �κ��� ������... 
*/

#include <stdio.h>
#include <stdlib.h>

//node
typedef struct NODE{
	int data;
	struct NODE *next;
}N; // �ڱ�����_����ü 
int main(){
	N * head = (N *) calloc(1, sizeof(N)); //���� ����Ʈ�� ���� �ּҸ� �˱����� head node 
	
	N * node1 = (N *) calloc(1, sizeof(N));
	node1->data = 10; // . == -> 	���Ḯ��Ʈ���� .��ſ� -> ��� 
	head->next = node1;

	//!!!!!!!!!!!
	// head->next=node1->next; XXXXXX
	
	N * node2 = (N *) calloc(1, sizeof(N));
	node2->data = 20;
	node1->next = node2;
	node2->next = NULL;
	
	
	// ���Ḯ��Ʈ ���
	// ù ��� ���� NULL���� (����� ����)
	// �湮�� "�湮�� ������"�� �ʿ���! 
	N * p = head->next; //�湮�� ������ 
	
	while(p!=NULL){
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
	
	free(node2); //�޸𸮿��� ���� 
	free(node1);
	free(head);
	free(p); 
	return 0;
}










