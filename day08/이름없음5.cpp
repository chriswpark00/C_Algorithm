#include<stdio.h>
int f(int a, int b){
	
	for(int i=0;i<b;i++){
		a=a*a;
	}
	
	return a; 
}



int main(){
	
	int a,b;
	
	scanf("%d %d",&a,&b);
	
	printf("%d�� %d���� %d�̴�",a,b,f(a,b));
	
	return 0;
} 
