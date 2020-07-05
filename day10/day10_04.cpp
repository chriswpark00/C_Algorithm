/*
구조체 문제: 행맨 

1. 문제수를 입력 받는다. (정수) n개 

2. n개의 문자열을 받는다

3. 각 문자열 마다 문자의 개수만큼 '_'대입 

4. 총 3개의 문자를 입력받고 문자열에서 문자가있는칸에 '_'대신에 문자 대입

5. 맞춘 문자 하나당 10점. 총점 출력 
예시)
2
banana
kiwi 

문자를 입력하세요 : a
_a_a_a
문자를 입력하세요 : c
_a_a_a (c는 없는문자입니다!)

종료 : 30점. 
 
*/

typedef struct WORD{
	char word[10];
	char show[10];
}w; 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int n;
	scanf("%d", &n);
	
	w * words = (w *) malloc(n * sizeof(w));
	for(int i = 0; i < n; i++){
		scanf(" %s", words[i].word);
		
		int length = strlen(words[i].word);
		for(int j =0; j < length; j++){
			words[i].show[j] = '_';
		}
		//show[]문자배열 -> + '\0' ==> 문자열
		words[i].show[length] = '\0';
	}
	
	
	/////////////////////////////////////////////////
	
	for(int i = 0; i < n; i++){ //문제 수 만큼 반복 
		printf("----------------------------\n");
		printf("%d번 문제: %s\n", i + 1, words[i].show);
		int length = strlen(words[i].word);
		int cnt = 0;
		
		while(strcmp(words[i].show, words[i].word) != 0){ // 각 문제마다 총 3번의 기회 
			char guess;
			printf("문자를 입력하세요: ");
			scanf(" %c", &guess);
			
			int sw = 0;
			for(int j = 0; j < length; j++){
				if(words[i].word[j] == guess){
					words[i].show[j] = guess;
					sw = 1;
				}
			}
			
			if(sw){
				printf("%s\n", words[i].show);
			} else{
				printf("%c는 없는 문자.\n", guess);
				cnt++;
			}
			
			if(cnt == 2) break;
		}
		
		
		if(strcmp(words[i].show, words[i].word) == 0){
			printf("상품지급\n");
		} else{
			int result = 0;
			for(int j = 0; j < length; j++){
				if(words[i].show[j] != '_'){
					result += 10;
				}
			}
			printf("점수 : %d점\n", result);
		}
		
	}
} 
