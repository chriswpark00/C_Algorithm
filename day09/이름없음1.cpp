#include<stdio.h>
#include<math.h> //계산을 도와주는 함수들이 내장돼있다 
void f(){
	printf("안녕하세요");
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
	//x의 y승
	
	printf("%d=결과",f(x,y));
	
	printf("\n미리구현된 함수 pow(): %lf",pow(2.0,10.0)); //2의 10승 헤더파일 새로 만들어야함
	//pow( (double)x, (double)y ) 이렇게 쓰면 명시적 형변환!~
	//<미리 구현된 함수를 사용시 주의사항>
	//1. input 자료형을 맞춰서 호출한다!
	//2. output 자료형을 맞춰서 출력한다! 
	
	printf("\n절대값을 보여주는 함수 abs(): %d",abs(10));
	//input=>int output=>int
	
	printf("\n제곱근을 알려주는 함수 sqrt(): %lf",sqrt(25.0));
	//input output 모두 double
	
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

printf("1점의 좌표를 입력하세요:");
scanf("%d %d",&x1,&y1);
printf("2점의 좌표를 입력하세요:");
scanf("%d %d",&x2,&y2);

//

double sqrt(pow((double)(x2-x1) , 2.0)+pow((double)(y2-y1) , 2.0));
//한줄에 코딩이 가능!! 

int x3=x1-x2;
int y3=y1-y2;

int z=x3*x3+y3*y3;



printf("\n 두점 사이의 거리: %lf",sqrt(z));

return 0;
}
//
//재귀함수 ==재귀호출==순환호출==순환함수
// : 함수가 기능을 수행하기 위해 자기자신을 필요로 하는 경우
//팩토리얼! 대표적인 재쉬함수

int f(int n){
	printf("확인"); //5넣었을때 확인이 다섯번나옴!!!!!!!!!!!! 
	if(n==1) return 1;
	 
	else return n*f(n-1);
	//순환함수를 사용할 때에는
	//[종료시점]을 반드시 설정해야함!!! 
} 

int main(){
	printf("5!은 %d입니다.",f(5));
}
//
//순환함수 show(1234) : 정수 1개를 받아서 일의 자리를 출력해주는 함수=>4
// 1234=> 4 3 2 1
// 32651=> 1 5 6 2 3
//
void show(int input){
	printf("%d",input%10);
	show(input/10 !==0) show(input/10);
	}
	
	[알고리즘]
	좌절단 우절단  설명을 보자! 
	/[123|4] %10
	
	
	
	
	1.함수  input output 맞춰서 작성
	2. 반복되는 구간 체크
	3. 종료시점 만들기 
int main(){
	
	int n;
	scanf("%d",&n);
	show(n);
	
	return 0;
}
//
//1부터 10000까지 정수들 중에서 좌절단해도 소수인 정수를 출력하시오.

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
//여기부터 답
int sosu(int n){
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(n%i==0){ //i가 n의 약수이다. 
			cnt++;
		}
	}
	return cnt;
}

//좌절단하는 함수 만들어야함!
int cut(int n){
return n/10; 
}

int main(){
	
	for(int i=1;i<=10000:i++){
		int ii=i; 
		while(sosu(ii) ==2){  //i가 소수라면 ,몇변 반복될지 모르기 때문에 while을 사용함 
			ii=cut(ii); // for문을 제어하는 변수는 절대!!!!!!!! 변경하지 않는다!!!!!!!! (그래서 ii로 변경!)
			if(ii==0){
				printf("%d",i);
				break;
			} 
		} 
	}
	return 0;
} 
//포인터
void swap(int *x,int *b)  //값에 의한 호출(call by value)
//여기의 별의 포인터라고 부름
//포인터를 사용하게 되면, 참조에 의한 호출(call by reference)
//포인터를 사용하는 순간
//1-1. return을 2개 이상 해야하거나,
//1-2.외부함수로 main()에 직접적인 영향을 주고 싶을때 사용 
printf("확인");
int tmp=*x;
*x=*b;
*b=tmp;
}
int main(){
	
	
	int a=10;
	int b=20;
	printf("a=%d b=%d\n",a,b);
	swap(&a,&b);   // &는 주소연산자! 
	printf("변경\n");
	printf("a=%d b=%d\n",a,b);
	
	return 0;
} 
//
int arr[5]; //전역변수는 자동초기화됨! 
int main(){
	
	for(int i=0;i<5;i++){
		printf("%d",arr[i]);
	}
	
	return 0
} 
//문제?
//arr[]배열의 요소를 자신의 인덱스가 아니면서, 인덱스 범위내의 정수로 바꾸시오. 중복되지 않게!
// 0 1 2 3 4
//[1 3 0 4 2]// rand() 함수 사용! 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int arr[n]
int main(){
	
	
	for(int i=0;i<n;i++ ){
		printf("arr[rand()]",arr);
	}
	
	
	
}


























 





