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
	
	printf("%dÀÇ %d½ÂÀº %dÀÌ´Ù",a,b,f(a,b));
	
	return 0;
} 
