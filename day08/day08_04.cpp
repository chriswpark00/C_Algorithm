/*
���ٿ� ����!!!
 
 
 1. ������ ����n �Է�
 2. 1~n ������������ ������ ����
 3. ���ӽ��� -> ��ǻ�Ͱ� �������� �����ȿ� �ִ� ������ �� (�����Լ�) answer
 4. ������ �����͸� ����. 
 4-1. ""���� �۽��ϴ�/ ""���� Ů�ϴ�. ""~""�߿� ���ÿ�.
 5. 3�����Ϸ� ���߸� ��ǰ����
 5-2. 10���̻� ����-> ���ھ˷��ְ� �ڵ� ����! 
*/
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

/*
������
srand(time(NULL));
int data=rand()%10 + 1; //0 ~ 9 -> 1~10 
*/
void puzzle(int n, int answer, int cnt, int min, int max){
	if(cnt == 10){
		printf("10�� �ʰ�! ����! ������: %d", answer);
		return; 
	}
	
	int result;
	scanf("%d", &result);
	if(result < min || result > max){
		printf("������ ���.\n");
		puzzle(n, answer, cnt, min, max);
	}
	cnt++;
	if(result > answer){
		max = result - 1;
		printf("%d���� �۽��ϴ�. [%d~%d]�߿� ���ÿ�\n", result, min, max);
		puzzle(n, answer, cnt, min, max);
	} else if(result < answer){
		min = result + 1;
		printf("%d���� Ů�ϴ�. [%d~%d]�߿� ���ÿ�\n", result, min, max);
		puzzle(n, answer, cnt, min, max);
	} else if(result == answer){
		if(cnt <= 3) printf("��ǰ����\n");
		printf("����!\n");
		return;
	}
	
	return;
}

int main() {
	int n = 0;
	printf("������ ����: ");
	scanf("%d", &n);
	
	int cnt = 0;
	srand(time(NULL));
	int answer = rand()%n + 1;
	
	puzzle(n, answer, 0, 1, n);
	
//	while(cnt < 10){
//		int result;
//		scanf("%d", &result);
//		cnt++;
//		if(result > answer){
//			printf("%d���� �۽��ϴ�. [%d~%d]�߿� ���ÿ�\n", result, 1, result - 1);
//		} else if(result < answer){
//			printf("%d���� Ů�ϴ�. [%d~%d]�߿� ���ÿ�\n", result, result + 1, n);
//		} else{
//			if(cnt <= 3) printf("��ǰ����\n");
//			printf("����!\n");
//			break;
//		}
//	}
//	
//	if(cnt == 10){
//		printf("����! ������: %d", answer);
//	}
	
	return 0;
}
