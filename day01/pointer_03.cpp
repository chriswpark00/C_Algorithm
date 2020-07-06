#include <stdio.h>
void show (int *arr){
	int length = sizeof(arr);
	for(int i = 1; i <= 5; i++ ){
		printf("%d\n", arr[5 - i]);
	}
}
int main(){
	// 포인터 연산 // 대표하는 자료형만큼 증가한다
	// ex) 포인터를 1 증가 시켰을 때, int +4 double +8  char +1
//	int c;
//	int *pc;
//	pc = &c;
//	printf("포인터 변수 pc의 값 = %u\n", pc); 
//	printf("포인터 변수 (pc + 1)의 값 = %u\n", pc + 1);

//	char d = 'a';
//	char *pd = &d;
//	printf("d = %c %c\n", *pd, d);
//	(*pd) += 1; // 우선순위!  
//	printf("d = %c %c\n", *pd, d);
//	(*pd)++;
//	printf("d = %c %c\n", *pd, d);
//	(*pd)++;
//	printf("d = %c %c\n", *pd, d);

	int arr[5] = {1, 2, 3, 4, 5};
	// ### 배열 [0]인덱스의 주소는 배열의 이름과 동일!! 
	show(arr); // &arr[0] == arr
	return 0; 
}
