#include<stdio.h>
int sosu(int n){
	
	int cnt=0;
	
for(int i=1;i<=n;i++){
	if(n%i==0){  //i�� n�� ����̴� 
		cnt++;
	}

}
return cnt;

}

int main(){
	int n;
	scanf("%d",&n);



if(sosu(n)==2){
	printf("%d�� �Ҽ��̴�",n);
}
else{
	printf("%d�� �Ҽ��� �ƴϴ�",n);
}
return 0;
}

