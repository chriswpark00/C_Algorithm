#include<stdio.h>
int main(){
	int a[50];
	for(int i=0;i<50;i++){
		scanf("%d",&a[i]);
		if(a[i]==0){
			break;
		}
	}
	for(int i=0;i<50;i++){
		if(a[i]==0){
			break;
		}
		else{
			int cnt=1; //카운팅 유의하자 
			while(a[i]==a[i+1]){
				i++;
				cnt++;
			}
			printf("%d %d",cnt, a[i]);
		}
	}
	return 0; 
	}
	
	//다차원 배열
	// int arr[3]={1,2,3};  1차원 배열(통상적임)
	// int ARR[2][3]= {{1,2,3} , {1,2,3}}; // int ARR[헹][열]; 
	//2차원 배열 ->3개짜리 저런 배열이 2개 있다 
	
	//래기드 배열, 비정방형 배열 위는 2칸 아래는 3칸 등=> 객체지향언어여서 C언어는 불가
	//직사각형, 정사각형 모양으로 배열을 생성, 저장하여 활용할 예정 
	
	int main(){
		int a[2][3]={{1,2,3},{11,12,13}};
		
		for(int i=0;i<2;i++){
			for(int j=0;j<3;j++){
				printf("%3d",a[i][j]);
			}
			printf("\n");   //i와 j를 맞춰줘야 한다
}   //2차원 배열 언제 쓸까?
      국  영  수  사  과 
1학년 10  20  30   40  50
2학년
3학년

//

// 각 학년별 총합을 구해보자 

int stu[3][5];
for(int i=0;i<3;i++){
	for(int j=0;j<5;j++){
		scanf("%d",&stu[i][j]);
	}
}			 


for (int i=0;i<3;i++){
	printf("%d학년 총합 :",i+1);
	int sum=0;
	for(int j=0;j<5;j++){
		sum+=stu[i][j];
	}
	printf("%d점이다.\n",sum);
}


// 과목별 총합
int stu[3][5];
for(int i=0;i<3;i++){
	for(int i=0;i<5;i++){
		scanf("%d",&stu[i][j]);
	}
} 

for (int i=0;i<5;i++){
	printf("%d과목  총합 :",i+1);
	int sum=0;
	for(int j=0;j<3;j++){
		sum+=stu[j][i];
	}
	printf("%d점이다.\n",sum);
}


//몇행 몇열??
//1행 1열(기사)=>arr[0][0]
//x행 y열? => arr[x-1][y-1];

  국  영  수  사  과 
1학년 10  20  30   40  50
2학년
3학년

//몇학년인지, 점수가 몇점인지 (정수 2개 입력)
// 1 20->fail  // 1 31->




int stu[3][5];
for(int i=0;i<3;i++){
	for(int i=0;i<5;i++){
		scanf("%d",&stu[i][j]);
	}
} 

int x,y;
printf("\n학년과 점수를 입력하세요");
scanf("%d%d",&x,&y);
int sum=0;
for(int j=0;j<5;j++){
	sum+=stu[x-1][j];
} 
if(sum/5>y){
	printf("FAIL\n");
}
else{
	printf("great!\n);
}

//
int x;
for(x=0;x<10;x++){
}
printf("%d",x); //

for(int i=0;i<10;i++){
}
printf("%� 없다. for문 밖으로 나가는 순간 죽어버리기 때문에



 
	 
	
	
	
	
	 
