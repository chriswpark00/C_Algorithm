#include <stdio.h>
#include <string.h> //strcpy( ����, ��); ���ڿ��� �����Ҷ� ����ϴ� �޼ҵ� 
// ����ü
/*
	������ �ڷ����� ������ �ƴ� �� ���
	������ġ�� main()�Լ� �� - > �ؾƲ���Ƽ�
	����ü�� ������ ��������� ������ ���� ���ʿ� X
	
	"��ü" �������� Ȯ���
	
	**typedef -> �ڷ����� ����� Ű����
	=> 
		1. ������ ���� 
		2. �̽ļ� ���� (���� ������Ͽ� ���� ó����.) 
*/
// �ڷ����� �޶� �� 
// ex) �迭������
	// �л�1 : ��, ��, �� ����
	// �л�1 ����, �л�2 ����, �л�3 ����...
	// ����ü������  
	// �л��� ����, �̸�, Ű �ڷᱸ���� �ٸ� (int, char, double)
	
struct student{ // ���� ��ġ ����!!  
	char name[10];
	int score1;
	int score2;
	int score3;
	double avg;
};

int main() {
	struct student s1 = { "ȫ�浿", 10, 20, 30, 3.14};
	struct student s2;
	strcpy(s2.name, "aaaa");
	scanf("%d%d%d", &s2.score1, &s2.score2, &s2.score3); // [ . ] == ��������� 
	scanf("%lf", &s2.avg);
	printf("%s, %d, %.2lf", s2.name, s2.score1, s2.avg);		
	return 0;
}
