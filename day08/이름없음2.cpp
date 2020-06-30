#include<stdio.h>
int input(){
	int x;
	scanf("%d",&x);
	return x;
} 

int getsmaller(int a, int b){




return a>b? b:a;
}


int main(){
	
	int a=input();
	int b=input();
	
	printf("%d와 %d중 더 작은값은 %d입니다",a,b,getsmaller(a,b));
}

