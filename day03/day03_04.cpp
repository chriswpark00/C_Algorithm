#include <stdio.h>
/*

10 + 3i
9 + 9i

ù ���� ���Ҽ��� �Է��ϼ��� : 10 3
�� ��° ���Ҽ��� �Է��ϼ��� : 9 9

��� : 19 + 12i 
*/

typedef struct data{
	int x;
	int y;
}I;

int main() {
	I i1;
	I i2;
	
	printf("ù ��° ���Ҽ��� �Է��ϼ���: ");
	scanf("%d%d", &i1.x, &i1.y);
	
	printf("�� ��° ���Ҽ��� �Է��ϼ���: ");
	scanf("%d%d", &i2.x, &i2.y);
	
	I i3 = {i1.x + i2.x, i1.y + i2.y};
	printf("�� ���Ҽ��� ���� %d + %di �Դϴ�.", i3.x, i3.y); 
	return 0;
}
