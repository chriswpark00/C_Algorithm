#include <stdio.h>
#include <stdlib.h>

// 2차원 배열 동적 할당 

int main() {
	int **A; // 더블/이중 포인터
	
	A = (int **) malloc(2 * sizeof(int *));
	
	for (int i = 0; i < 2; i++){
		A[i] = (int *) malloc(3 * sizeof(int));
	}
	
	//래기드 배열 // 비정방형 배열 
//	A[0] = (int *) malloc (3 * sizeof(int));
//	A[1] = (int *) malloc (5 * sizeof(int));
	
	
	
	return 0;
}
