#include <stdio.h>

//main() �Լ����� �迭 �ٷ�� with ������
int find(int *p, int num, int length){
	int cnt = 0;
	printf("%d aaa\n", length);
	for(int i = 0; i < length; i++){
		if(p[i] == num){
			cnt++;
		}
	}
	printf("%d�� �Էµ� Ƚ�� = %d", num, cnt);
}

int main(){
	int arr[5]; // << ����ڰ� ���� 5�� �Է� 
	// ex) 1 1 3 4 4
	// ���: 1�� ��� �Է� �Ǿ����� ���
	// ex) 2
	// �Լ� ���(�����ͻ��)
	size_t length = sizeof(arr) / sizeof(int);
	printf("���� 5�� �Է�%d\n", length);
	for(int i = 0; i < length; i++){
		scanf("%d", &arr[i]); 	
	}
	find(arr, 1, length);
	

	
} 
