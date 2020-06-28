#include<stdio.h>
#include<string.h>
int main(){
	
	char ex1[3][10]={"abc","ABC","aBcD"};
	char ex2[3][10];
	
	int j;
	for(int i=0;i<3;i++){
		for(int j=0;j< strlen(ex1[i]);j++){   //j< 여기는 문자열의 길이만큼!
		
		//ex1 문자열 배열
		//ex1[0] "abc" 문자열
		//ex1[0][1] 'b' 문자 
		 
			if(ex1[i][j]>='a')
			{
			ex2[i][j]=ex1[i][j] -32;  //ex1 소->대 
		}
		else{
			ex2[i][j]=ex1[i][j] +32;
		}
	}
	ex2[i][j]='\0'; //문자배열을 문자열로 승극시키고 싶으면 마지막에 널문자 추가한다! 
	
}

for(int i=0;i<3;i++){
	printf("%s",ex2[i]);
}

return 0;
}


