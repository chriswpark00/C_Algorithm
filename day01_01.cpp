#include <stdio.h>

void swap(int *x, int *y); // ������ ���� a, b 

int main(){
	int a = 10;
	int b = 20;
	printf("%d, %d\n", a, b);
	swap(&a, &b);
	
	printf("%d, %d\n", a, b);
	
	return 0;
} 

// ###  �����͸� ���� ����ϳ�?? 
// main() �Լ��� ������
// �ܺ� ����������Լ����� ��ȭ�� �ٶ� ��� 
void swap(int *a, int *b){
	int pointer = *a;
	*a = *b;
	*b = pointer;
	
	
}
