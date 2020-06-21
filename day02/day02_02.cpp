#include <stdio.h>

//포인터 배열 

/*
	1. visual studio에서는 안정적인 저장을 하려고 하기 때문에
		변수 이름없이 저장되는 것을 허용하지않음.
		그래서 2번째 코드 작동 X 
	2. 포인터는 가변적인 자료형! 저장공간을 할당하고 있지 않고,
		"가리키고"있을 뿐임. 
*/
int main(){
////////////////////////////// 1	
	int a = 10, b = 20, c = 30;
	int *arr[3]; // 포인터 배열!!
//	int *arr[3] = {&a, &b, &c};
	arr[0] = &a;
	arr[1] = &b;
	arr[2] = &c;
	for (int i = 0; i < 3; i++){
		printf("%d", *arr[i]);
	}
	printf("\n");

////////////////////////////// 2
	char *g[3] = {"hello", "C_world", "hahaha"}; // visual studio에서는 안됨! 
	// g[0]이 "hello"라는 문자열의 주소를 카리킴 
	for (int i = 0; i < 3; i++){
		printf("%s \n", g[i]);
	}
	
	
	return 0;
} 
