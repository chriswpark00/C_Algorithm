#include <stdio.h>

int main(){
	
	// ���� ������ ���� ������
	int num1 = 10, num2 = 20;
	int *ptr1 = &num1, *ptr2 = &num2;
	int **dptr1 = &ptr1, **dptr2 = &ptr2; // ���� �����Ͷ�?
	// ������( ������ ������ �ּ�) �� �ޱ� ���� ������
	
	int sum;
	sum = num1 + num2;
	printf("�Ϲݺ��� = %d\t", sum);
	sum = *ptr1 + *ptr2;
	printf("�����ͺ��� = %d\t", sum);
	sum = **dptr1 + **dptr2;
	printf("���������ͺ��� = %d\t", sum);
	
	int arr[7] = {70, 60, 10, 20, 40, 30, 50};
	
	int i, *p;
	p = &arr[0];
	for(i = 0; i < 7; i++){
		for (int j = 0; j < 6; j++){
			if(*(p + j) > *(p + j + 1)){
				int tmp = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = tmp;
			}
		}
	}
	
	for (i = 0; i < 7; i++){
		printf("%d", arr[i]);
	}

	
	return 0; 
}
