#include <stdio.h>
// 배열 포인터 
int main(){
	///////////////////////1
	
	int x[2][3] = {{1,2,3}, {11,12,13}};
	int (*xp)[3] = x;
	// int 타입 인덱스[3]개짜리를 가지는 배열을 가리키는 포인터 *xp 
	for (int i = 0; i < 2; i++){
		
		for(int j = 0; j < 3; j++){
			printf("%3d", xp[i][j]);
		}
		printf("\n");
	}
	
	///////////////////////1
	char str[3][7] = {"ABC", "abcde", "hello!"};
	char (*p)[7];
	p = str;
	
	for(int i = 0; i < 3; i++){
		printf("%s\n", *(p+i));
	}
	return 0;
} 
