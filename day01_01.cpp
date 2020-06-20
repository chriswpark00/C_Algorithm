#include <stdio.h>

void swap(int *x, int *y); // 포인터 변수 a, b 

int main(){
	int a = 10;
	int b = 20;
	printf("%d, %d\n", a, b);
	swap(&a, &b);
	
	printf("%d, %d\n", a, b);
	
	return 0;
} 

// ###  포인터를 언제 사용하나?? 
// main() 함수의 변수를
// 외부 사용자정의함수에서 변화를 줄때 사용 
void swap(int *a, int *b){
	int pointer = *a;
	*a = *b;
	*b = pointer;
	
	
}
