#include <stdio.h> 


int main(){
//	int i = 10;
//	char c = 'A';
//	double d = 3.14;
//	int *ip = NULL;
//	char *cp = NULL;
//	double *dp = NULL;
//	
//	printf("�Ϲݺ��� i�� ũ�� = %d\n", sizeof(i)); //
//	printf("�����ͺ��� ip�� ũ�� = %d\n", sizeof(ip)); //4
//	printf("�Ϲݺ��� c�� ũ�� = %d\n", sizeof(c));
//	printf("�����ͺ��� cp�� ũ�� = %d\n", sizeof(cp)); //4
//	printf("�Ϲݺ��� d�� ũ�� = %d\n", sizeof(d));
//	printf("�����ͺ��� dp�� ũ�� = %d\n", sizeof(dp)); //4byte or 8byte

	//������ ����!
	int i = 10;
	int *ip = &i;
	// i == *ip &i == ip
	printf("�Ϲݺ��� i�� �ּҰ� = %p\n �� = %d\n", &i, i); 
	printf("�����ͺ��� i�� �ּҰ� = %p\n �� = %d\n", ip, *ip);
	
	// ���� 2
	int b1, b2;
	
	int *pb;
	pb = &b1;
	*pb = 100;
	pb = &b2;
	*pb = 200;
	printf("b1 = %d b2 = %d\n", b1, b2); 
}
