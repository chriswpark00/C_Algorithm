#include<stdio.h>
// 1. 학생수 입력 :3
// 2. 성적 입력: 10 20 30
// 3. show()=> 평균값 (소수점 둘째자리)

int average(){
	char str[];
	scanf("%s",str);
	
	int sum=0;
	
	for(int i=0; i<strlen(str); i++){
		 sum+=str[i];
		
	} 
	
	
	return sum;
	
	
	
}

int main(){
	int n;
	printf("학생수:",n);
	scanf("%d",n);
	
	printf("%.2lf",average(str)/n)
	
	return 0;
	
}
