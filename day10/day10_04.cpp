/*
����ü ����: ��� 

1. �������� �Է� �޴´�. (����) n�� 

2. n���� ���ڿ��� �޴´�

3. �� ���ڿ� ���� ������ ������ŭ '_'���� 

4. �� 3���� ���ڸ� �Է¹ް� ���ڿ����� ���ڰ��ִ�ĭ�� '_'��ſ� ���� ����

5. ���� ���� �ϳ��� 10��. ���� ��� 
����)
2
banana
kiwi 

���ڸ� �Է��ϼ��� : a
_a_a_a
���ڸ� �Է��ϼ��� : c
_a_a_a (c�� ���¹����Դϴ�!)

���� : 30��. 
 
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
		//show[]���ڹ迭 -> + '\0' ==> ���ڿ�
		words[i].show[length] = '\0';
	}
	
	
	/////////////////////////////////////////////////
	
	for(int i = 0; i < n; i++){ //���� �� ��ŭ �ݺ� 
		printf("----------------------------\n");
		printf("%d�� ����: %s\n", i + 1, words[i].show);
		int length = strlen(words[i].word);
		int cnt = 0;
		
		while(strcmp(words[i].show, words[i].word) != 0){ // �� �������� �� 3���� ��ȸ 
			char guess;
			printf("���ڸ� �Է��ϼ���: ");
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
				printf("%c�� ���� ����.\n", guess);
				cnt++;
			}
			
			if(cnt == 2) break;
		}
		
		
		if(strcmp(words[i].show, words[i].word) == 0){
			printf("��ǰ����\n");
		} else{
			int result = 0;
			for(int j = 0; j < length; j++){
				if(words[i].show[j] != '_'){
					result += 10;
				}
			}
			printf("���� : %d��\n", result);
		}
		
	}
} 
