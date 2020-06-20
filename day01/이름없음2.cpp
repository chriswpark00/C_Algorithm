#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int res=0;
	res += a%2==0 ? a:0;    //짝수는 2로 나누면 나머지가 0 
	res += b%2==0 ? b:0;   // res+=b; -> res=res+b; 
	res += c%2==0 ? c:0;
	printf("%d",res);	
  return 0;
}
