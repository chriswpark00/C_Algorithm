#include<stdio.h>
#include<math.h> //����� �����ִ� �Լ����� ������ִ� 
void f(){
	printf("�ȳ��ϼ���");
}
int main(){
	
	f();
	
	return 0;
}
//
int f(int x, int y)
int main(){
	int x,y;
	scanf("%d%d",&x,&y);
	//x�� y��
	
	printf("%d=���",f(x,y));
	
	printf("\n�̸������� �Լ� pow(): %lf",pow(2.0,10.0)); //2�� 10�� ������� ���� ��������
	//pow( (double)x, (double)y ) �̷��� ���� ����� ����ȯ!~
	//<�̸� ������ �Լ��� ���� ���ǻ���>
	//1. input �ڷ����� ���缭 ȣ���Ѵ�!
	//2. output �ڷ����� ���缭 ����Ѵ�! 
	
	printf("\n���밪�� �����ִ� �Լ� abs(): %d",abs(10));
	//input=>int output=>int
	
	printf("\n�������� �˷��ִ� �Լ� sqrt(): %lf",sqrt(25.0));
	//input output ��� double
	
	return 0; 
}

int f(int x, int y){
	int res=1;
	for(int i=0;i<y;i++){
		res*=x;
	}
	return res;
}

int main(){

int x1,y1,x2,y2;

printf("1���� ��ǥ�� �Է��ϼ���:");
scanf("%d %d",&x1,&y1);
printf("2���� ��ǥ�� �Է��ϼ���:");
scanf("%d %d",&x2,&y2);

//

double sqrt(pow((double)(x2-x1) , 2.0)+pow((double)(y2-y1) , 2.0));
//���ٿ� �ڵ��� ����!! 

int x3=x1-x2;
int y3=y1-y2;

int z=x3*x3+y3*y3;



printf("\n ���� ������ �Ÿ�: %lf",sqrt(z));

return 0;
}
//
//����Լ� ==���ȣ��==��ȯȣ��==��ȯ�Լ�
// : �Լ��� ����� �����ϱ� ���� �ڱ��ڽ��� �ʿ�� �ϴ� ���
//���丮��! ��ǥ���� �罬�Լ�

int f(int n){
	printf("Ȯ��"); //5�־����� Ȯ���� �ټ�������!!!!!!!!!!!! 
	if(n==1) return 1;
	 
	else return n*f(n-1);
	//��ȯ�Լ��� ����� ������
	//[�������]�� �ݵ�� �����ؾ���!!! 
} 

int main(){
	printf("5!�� %d�Դϴ�.",f(5));
}
//
//��ȯ�Լ� show(1234) : ���� 1���� �޾Ƽ� ���� �ڸ��� ������ִ� �Լ�=>4
// 1234=> 4 3 2 1
// 32651=> 1 5 6 2 3
//
void show(int input){
	printf("%d",input%10);
	show(input/10 !==0) show(input/10);
	}
	
	[�˰���]
	������ ������  ������ ����! 
	/[123|4] %10
	
	
	
	
	1.�Լ�  input output ���缭 �ۼ�
	2. �ݺ��Ǵ� ���� üũ
	3. ������� ����� 
int main(){
	
	int n;
	scanf("%d",&n);
	show(n);
	
	return 0;
}
//
//1���� 10000���� ������ �߿��� �������ص� �Ҽ��� ������ ����Ͻÿ�.

void show(int input){
	show(input/10!==0) show(input/10);
	show(input/10==0)  shoiw(input);
} 

int main(){
	
	for(int i=0;i<10000;i++){
		int i/10=a;
		if(i=0;i<a;i++){
			if(a%i==0){
				int cnt=1;
				cnt++;
			}
			
			if(cnt==2){
				printf("%d",i);
			}
		}	
	}
	return 0;
}
//������� ��
int sosu(int n){
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(n%i==0){ //i�� n�� ����̴�. 
			cnt++;
		}
	}
	return cnt;
}

//�������ϴ� �Լ� ��������!
int cut(int n){
return n/10; 
}

int main(){
	
	for(int i=1;i<=10000:i++){
		int ii=i; 
		while(sosu(ii) ==2){  //i�� �Ҽ���� ,� �ݺ����� �𸣱� ������ while�� ����� 
			ii=cut(ii); // for���� �����ϴ� ������ ����!!!!!!!! �������� �ʴ´�!!!!!!!! (�׷��� ii�� ����!)
			if(ii==0){
				printf("%d",i);
				break;
			} 
		} 
	}
	return 0;
} 
//������
void swap(int *x,int *b)  //���� ���� ȣ��(call by value)
//������ ���� �����Ͷ�� �θ�
//�����͸� ����ϰ� �Ǹ�, ������ ���� ȣ��(call by reference)
//�����͸� ����ϴ� ����
//1-1. return�� 2�� �̻� �ؾ��ϰų�,
//1-2.�ܺ��Լ��� main()�� �������� ������ �ְ� ������ ��� 
printf("Ȯ��");
int tmp=*x;
*x=*b;
*b=tmp;
}
int main(){
	
	
	int a=10;
	int b=20;
	printf("a=%d b=%d\n",a,b);
	swap(&a,&b);   // &�� �ּҿ�����! 
	printf("����\n");
	printf("a=%d b=%d\n",a,b);
	
	return 0;
} 
//
int arr[5]; //���������� �ڵ��ʱ�ȭ��! 
int main(){
	
	for(int i=0;i<5;i++){
		printf("%d",arr[i]);
	}
	
	return 0
} 
//����?
//arr[]�迭�� ��Ҹ� �ڽ��� �ε����� �ƴϸ鼭, �ε��� �������� ������ �ٲٽÿ�. �ߺ����� �ʰ�!
// 0 1 2 3 4
//[1 3 0 4 2]// rand() �Լ� ���! 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int arr[n]
int main(){
	
	
	for(int i=0;i<n;i++ ){
		printf("arr[rand()]",arr);
	}
	
	
	
}


























 





