// ����ü �ǽ�
// ������ �߰����� ã�� 

#include <stdio.h>
//struct point {
//	double x;
//	double y;
//};
typedef struct point {
	double x;
	double y;
}POINT; // POINT��� �θ��� �ڷ����� ����� ���. 

int main(){
	
//	struct point p1;
//	struct point p2;
//	struct point p3;
	POINT p1;
	POINT p2;
	POINT p3;
	
	scanf("%lf%lf", &p1.x, &p1.y);
	scanf("%lf%lf", &p2.x, &p2.y);
	
	p3.x = (p1.x + p2.x) / 2.0;
	p3.y = (p1.y + p2.y) / 2.0;
	
	printf("%.2lf, %.2lf", p3.x, p3.y);
	
	
	return 0;
} 
