#include <stdio.h>
#include <stdlib.h>

// 2���� �迭 ���� �Ҵ� 

int main() {
	int **A; // ����/���� ������
	
	A = (int **) malloc(2 * sizeof(int *));
	
	for (int i = 0; i < 2; i++){
		A[i] = (int *) malloc(3 * sizeof(int));
	}
	
	//����� �迭 // �������� �迭 
//	A[0] = (int *) malloc (3 * sizeof(int));
//	A[1] = (int *) malloc (5 * sizeof(int));
	
	
	
	return 0;
}
