
/*
 ���ڿ��� ���� ����n�� �Է¹޴´�. 
 
 �Է�2: 
 	n���� ���ڿ��� �Է� �޴´� 
 
 �Է�3: 
 	�� ���ڿ����� �� 3���� ��ȸ�� �־���.
	���ڸ� �Է¹ް�, �� ���ڰ� ���ڿ��� �ִ°��
	������ŭ ���� ����.
	�� 3���� ���� ������ ������ �� ��ŭ ���� ����
	
  ���
  �� ���� ������ش�. 
  
  ex)
  1
	���ڿ��� �Է��ϼ���: apple
	1���ڸ� �Է��ϼ���: _____ p
	2���ڸ� �Է��ϼ���: _pp__ e
	3���ڸ� �Է��ϼ���: _pp_e g
	g�� ���� ����.
	1�� ���� ������ apple�̸� ������ 60���Դϴ�. 

*/

#include "day04_02.h"

int main(){
	int n = 0;
	STR *s;
	
	//�Է� 1 
	printf("���ڿ��� ����: ");
	scanf("%d", &n);
	
	//�Է� 2 
	s = (STR *) calloc(n, sizeof(STR));
	for(int i = 0; i < n; i++){
		printf("%d) ���ڿ��� �Է��ϼ���: ", i+1);
		scanf("%s", s[i].word);
		for(int j = 0; j < strlen(s[i].word); j++){
			s[i].showword[j] = '_';
		}
		s[i].score = 0; //�ʱ�ȭ �߿�!! 
	}
	
	printf("------------------\n");
	
	//�Է� 3
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 3; j++){
			char tmp;
			int cnt = 0;
			printf("%d���ڸ� �Է��ϼ��� : %s ", j + 1, s[i].showword);
			scanf(" %c", &tmp);
			// Ŀ��/���۸� ������
			/*
			ex)
			int a;
			scanf("%d", &a);
			char c;
			scanf("%c", &c);
			
			���ۿ���...
			10 enter
			abc enter
			
			(���� 10�� a �� ����Ǹ� ���ۿ��� 10�� ��������)
			(�� ���� ������ enter�� �� ���� scanf�� c���� ��ƹ���)
			(���� ���ϴ� abc�� c�� ������� �ʰ� enter���� ����ǿ� ������?)
			���� %c����� ��� ���� ��ĭ ����!! scanf(" %c", &c); 
			*/ 
			for(int k = 0; k < strlen(s[i].word); k++){
				if(s[i].word[k] == tmp){
					s[i].showword[k] = tmp;
					cnt++;
				}
			} // end k
			if(cnt == 0) printf("%c�� �����ϴ�.\n", tmp);
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
		printf("%d���ڴ� %s�Դϴ�. %d���Դϴ�.\n", i + 1, s[i].word, s[i].score);
	} // end i
	return 0;
}
