#include <stdio.h> 


int main(){
//	int i = 10;
//	char c = 'A';
//	double d = 3.14;
//	int *ip = NULL;
//	char *cp = NULL;
//	double *dp = NULL;
//	
//	printf("일반변수 i의 크기 = %d\n", sizeof(i)); //
//	printf("포인터변수 ip의 크기 = %d\n", sizeof(ip)); //4
//	printf("일반변수 c의 크기 = %d\n", sizeof(c));
//	printf("포인터변수 cp의 크기 = %d\n", sizeof(cp)); //4
//	printf("일반변수 d의 크기 = %d\n", sizeof(d));
//	printf("포인터변수 dp의 크기 = %d\n", sizeof(dp)); //4byte or 8byte

	//포인터 사용법!
	int i = 10;
	int *ip = &i;
	// i == *ip &i == ip
	printf("일반변수 i의 주소값 = %p\n 값 = %d\n", &i, i); 
	printf("포인터변수 i의 주소값 = %p\n 값 = %d\n", ip, *ip);
	
	// 사용법 2
	int b1, b2;
	
	int *pb;
	pb = &b1;
	*pb = 100;
	pb = &b2;
	*pb = 200;
	printf("b1 = %d b2 = %d\n", b1, b2); 
}
