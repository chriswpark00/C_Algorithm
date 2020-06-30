#include<stdio.h>
int sosu(int n){
	
	int cnt=0;
	
for(int i=1;i<=n;i++){
	if(n%i==0){  //i가 n의 약수이다 
		cnt++;
	}

}
return cnt;

}

int main(){
	int n;
	scanf("%d",&n);



if(sosu(n)==2){
	printf("%d는 소수이다",n);
}
else{
	printf("%d는 소수가 아니다",n);
}
return 0;
}

