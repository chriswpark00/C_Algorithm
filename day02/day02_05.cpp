#include <stdio.h>
#include <stdlib.h>
 
// ���� �Ҵ� / ���� �޸� / malloc


/*
	����static :  ���α׷��� ����Ǳ����� ���õ�.
		ex) �迭, ���� ��� ����
	 
	����dynamic : ���α׷� �������� ���õ�. 
		ex) ������
		
	���� �Ҵ�: ������ �迭�� ������ �����͸� ����Ͽ� ���α׷� �������Ŀ� �����ϴ°�. 
*/
int main() {
	/*
	
	int n;
	scanf("%d", &n);
	int *arr = (int *)malloc(n * sizeof(int)); //malloc : memory allocate
	// "n�� ��ŭ�� int�� �����޶�"  ����� ����ȯ �ʼ� 
	
//	int length = sizeof(arr)/ sizeof(arr[0]);
	for (int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	
	free(arr); //�޸� ���� 
	*/
	
	
	// ���� 1
	// ���� 1�� �Է¹���
	// ������ Ȧ���϶� �� ������ �Ҵ�(�迭�� �������)
	// ¦���� ���� Ȧ���� �Էµɶ����� �����Ҵ��� ���� �ʴ´�
	// �迭�� ������ �Է�����,
	// �Ҽ��� ����� ����ϴ� ���α׷� �ۼ�!!
	
	// ex) 3
	//		2 4 5
	// 		=> �Ҽ��� 2�� ��� ��µǸ� ��. 
	int length;
	int *arr1;
	int cnt = 0;
	
	// �迭�� ���� (Ȧ��) �� �Է¹޴´� 
	while(true){
		scanf("%d", &length);
		if(length % 2 != 0) break;
		else printf("Ȧ���� �Է��ϼ���!\n");
	}
	
	// Ȧ�� ������ �迭�� ���� ��´� 
	arr1 = (int *) malloc(length * sizeof(int));
	for (int i = 0; i < length; i++){
		scanf("%d", &arr1[i]);
	}
	
	// �Ҽ����� Ȯ���ϰ� �Ҽ��ΰ�� cnt���� ���� �����ش�. 
	// �Ҽ� ������ 1 ���� �ڽű��� ������ ��  �� 3�� �̻� ����������� (����� 2�� �̻�)�� �� �Ҽ��� �ƴϴ�. 
	int cntt = 0;
	for (int i = 0; i < length; i++){
		cntt = 0;
		for (int j = 1; j <= arr1[i]; j++){
			if(arr1[i] % j == 0) {
				cntt++;
				printf("%d / %d == %d", arr1[i], j, arr1[i] % j);
			}
		}
		if(cntt > 2) cnt++;
	}
	
	printf("�Ҽ� : %d", cnt);
	return 0;
} 
