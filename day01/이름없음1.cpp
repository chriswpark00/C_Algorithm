#include<stdio.h>

int main(){
	
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d\n",a/b);
	printf("%d %% %d=%d",a,b,a%b);
	
	return 0;
	
	
}

int ex(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("%d",a+b+c);
	double d;
	d=a+b+c;
	printf("%lf",d/3);
	return 0;
}
	
	
