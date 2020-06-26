/*
연결 리스트 링크드리스트 / Linked List

자료구조의 한 종류 - 배열, 구조체

구조체를 이용해서 구현(하나의 데이터가 두개이상의 정보(자료형이 다른 정보)를 갖고있기 때문)

typedef struct NODE{
	int data; 
	struct NODE *next; // 연결된 다음 데이터의 주소값 
						// 주소부 => 포인터를 사용하는 이유:
									저장하고있는 데이터는 주소(&)이기때문에 *(포인터)로 받아야함! 
}N;

Linked List 사용하는 원인?
배열의 저장방식은 1번에는 a가있고, 2번에는 b가 있고, 3번에는 c가 있다. 
 따라서, 삽입/삭제가 어렵다. 즉, 정적이다. 크기가 고정되어있다.

반면에 Linked List/연결 리스트의 저장방식은
a라는 데이터 다음에는 b가 있다. (a가 알고있음)(b는 앞에 a가있다는 사실을 모름)
b라는 데이터 다음에는 c가 있다. (하지만 a는 b다음에 c가 있다는 사실을 모름)
그래도 Linked List를 사용하는 이유?
1. 공간 효율이 좋음
2. 삽입 삭제가 용이(유리하다.)

단점:
1. 코더가 신경써야하는 부분이 많아짐... 
*/

#include <stdio.h>
#include <stdlib.h>

//node
typedef struct NODE{
	int data;
	struct NODE *next;
}N; // 자기참조_구조체 
int main(){
	N * head = (N *) calloc(1, sizeof(N)); //연결 리스트의 시작 주소를 알기위한 head node 
	
	N * node1 = (N *) calloc(1, sizeof(N));
	node1->data = 10; // . == -> 	연결리스트에서 .대신에 -> 사용 
	head->next = node1;

	//!!!!!!!!!!!
	// head->next=node1->next; XXXXXX
	
	N * node2 = (N *) calloc(1, sizeof(N));
	node2->data = 20;
	node1->next = node2;
	node2->next = NULL;
	
	
	// 연결리스트 출력
	// 첫 노드 부터 NULL까지 (출력을 위해)
	// 방문할 "방문용 포인터"가 필요함! 
	N * p = head->next; //방문용 포인터 
	
	while(p!=NULL){
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
	
	free(node2); //메모리에서 제거 
	free(node1);
	free(head);
	free(p); 
	return 0;
}










