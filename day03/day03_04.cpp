#include <stdio.h>
/*

10 + 3i
9 + 9i

첫 번재 복소수를 입력하세요 : 10 3
두 번째 복소수를 입력하세요 : 9 9

출력 : 19 + 12i 
*/

typedef struct data{
	int x;
	int y;
}I;

int main() {
	I i1;
	I i2;
	
	printf("첫 번째 복소수를 입력하세요: ");
	scanf("%d%d", &i1.x, &i1.y);
	
	printf("두 번째 복소수를 입력하세요: ");
	scanf("%d%d", &i2.x, &i2.y);
	
	I i3 = {i1.x + i2.x, i1.y + i2.y};
	printf("두 복소수의 합은 %d + %di 입니다.", i3.x, i3.y); 
	return 0;
}
