
/*
 문자열을 받을 개수n를 입력받는다. 
 
 입력2: 
 	n개의 문자열을 입력 받는다 
 
 입력3: 
 	각 문자열마다 총 3번에 기회가 주어짐.
	문자를 입력받고, 그 문자가 문자열에 있는경우
	개수만큼 점수 증가.
	총 3번을 통해 공개된 문자의 수 만큼 점수 받음
	
  결과
  총 점을 출력해준다. 
  
  ex)
  1
	문자열을 입력하세요: apple
	1문자를 입력하세요: _____ p
	2문자를 입력하세요: _pp__ e
	3문자를 입력하세요: _pp_e g
	g는 없는 문자.
	1번 문제 정답은 apple이며 점수는 60점입니다. 

*/

#include "day04_02.h"

int main(){
	int n = 0;
	STR *s;
	
	//입력 1 
	printf("문자열의 개수: ");
	scanf("%d", &n);
	
	//입력 2 
	s = (STR *) calloc(n, sizeof(STR));
	for(int i = 0; i < n; i++){
		printf("%d) 문자열을 입력하세요: ", i+1);
		scanf("%s", s[i].word);
		for(int j = 0; j < strlen(s[i].word); j++){
			s[i].showword[j] = '_';
		}
		s[i].score = 0; //초기화 중요!! 
	}
	
	printf("------------------\n");
	
	//입력 3
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 3; j++){
			char tmp;
			int cnt = 0;
			printf("%d문자를 입력하세요 : %s ", j + 1, s[i].showword);
			scanf(" %c", &tmp);
			// 커서/버퍼를 만난다
			/*
			ex)
			int a;
			scanf("%d", &a);
			char c;
			scanf("%c", &c);
			
			버퍼에서...
			10 enter
			abc enter
			
			(정수 10만 a 에 저장되며 버퍼에서 10만 지워진다)
			(그 다음 버퍼인 enter가 그 다음 scanf인 c에서 잡아버림)
			(따라서 원하던 abc가 c에 저장되지 않고 enter값이 저장되여 씹힌다?)
			따라서 %c사용할 경우 띄어쓰기 한칸 하자!! scanf(" %c", &c); 
			*/ 
			for(int k = 0; k < strlen(s[i].word); k++){
				if(s[i].word[k] == tmp){
					s[i].showword[k] = tmp;
					cnt++;
				}
			} // end k
			if(cnt == 0) printf("%c는 없습니다.\n", tmp);
		} // end j
		
		int cnt = strlen(s[i].word);
		double score = 0;
		for(int j = 0; j < strlen(s[i].word); j++){
			
			if(s[i].showword[j] == '_'){
				cnt--;
			}
			score = ((double)cnt / strlen(s[i].word)) * 100;
			s[i].score = (int)score;
		} // end j
		printf("%d문자는 %s입니다. %d점입니다.\n", i + 1, s[i].word, s[i].score);
	} // end i
	return 0;
}
