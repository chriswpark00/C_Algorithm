#include<stdio.h>
// 1. �л��� �Է� :3
// 2. ���� �Է�: 10 20 30
// 3. show()=> ��հ� (�Ҽ��� ��°�ڸ�)

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
	printf("�л���:",n);
	scanf("%d",n);
	
	printf("%.2lf",average(str)/n)
	
	return 0;
	
}
