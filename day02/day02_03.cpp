#include <stdio.h>
// �迭 ������ 
int main(){
	///////////////////////1
	
	int x[2][3] = {{1,2,3}, {11,12,13}};
	int (*xp)[3] = x;
	// int Ÿ�� �ε���[3]��¥���� ������ �迭�� ����Ű�� ������ *xp 
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
