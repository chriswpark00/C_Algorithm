#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int n;
	scanf("%d", &n);
	srand(time(NULL));
	int data = rand()%n + 1;
	int l = 1;
	int h = n;
	int m;
	int cnt = 0;
	printf("������: %d\n", data);
	while(cnt < 10){
		printf("%d~%d�߿� �� �Է�: ", l, h);
		scanf("%d", &m);
		if(l > m || m > h){
			printf("������ ������ϴ�. �ٽ� �Է� �ϼ���.\n");
			continue;
		}
		cnt++;
		
		if(data == m){
			printf("����!\n");
			break;
		} else if(data > m){
			printf("%d���� Ů�ϴ�.\n", m);
			l = m + 1;
		} else{
			printf("%d���� �۽��ϴ�.\n", m);
			h = m - 1;
		}
	}
	if(cnt <= 3){
		printf("��ǰ ����\n");
	} else if(cnt == 10){
		printf("����! data�� %d�Դϴ�.", data);
	} else{
		printf("����\n");
	}
}
