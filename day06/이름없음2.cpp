#include<stdio.h>
#include<string.h>
int main(){
	
	char ex1[3][10]={"abc","ABC","aBcD"};
	char ex2[3][10];
	
	int j;
	for(int i=0;i<3;i++){
		for(int j=0;j< strlen(ex1[i]);j++){   //j< ����� ���ڿ��� ���̸�ŭ!
		
		//ex1 ���ڿ� �迭
		//ex1[0] "abc" ���ڿ�
		//ex1[0][1] 'b' ���� 
		 
			if(ex1[i][j]>='a')
			{
			ex2[i][j]=ex1[i][j] -32;  //ex1 ��->�� 
		}
		else{
			ex2[i][j]=ex1[i][j] +32;
		}
	}
	ex2[i][j]='\0'; //���ڹ迭�� ���ڿ��� �±ؽ�Ű�� ������ �������� �ι��� �߰��Ѵ�! 
	
}

for(int i=0;i<3;i++){
	printf("%s",ex2[i]);
}

return 0;
}


