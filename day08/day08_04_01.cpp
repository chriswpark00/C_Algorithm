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
	printf("정답은: %d\n", data);
	while(cnt < 10){
		printf("%d~%d중에 수 입력: ", l, h);
		scanf("%d", &m);
		if(l > m || m > h){
			printf("범위를 벗어났습니다. 다시 입력 하세요.\n");
			continue;
		}
		cnt++;
		
		if(data == m){
			printf("정답!\n");
			break;
		} else if(data > m){
			printf("%d보다 큽니다.\n", m);
			l = m + 1;
		} else{
			printf("%d보다 작습니다.\n", m);
			h = m - 1;
		}
	}
	if(cnt <= 3){
		printf("상품 지급\n");
	} else if(cnt == 10){
		printf("실패! data는 %d입니다.", data);
	} else{
		printf("종료\n");
	}
}
