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
			int cnt=1; //ī���� �������� 
			while(a[i]==a[i+1]){
				i++;
				cnt++;
			}
			printf("%d %d",cnt, a[i]);
		}
	}
	return 0; 
	}
	
	//������ �迭
	// int arr[3]={1,2,3};  1���� �迭(�������)
	// int ARR[2][3]= {{1,2,3} , {1,2,3}}; // int ARR[��][��]; 
	//2���� �迭 ->3��¥�� ���� �迭�� 2�� �ִ� 
	
	//����� �迭, �������� �迭 ���� 2ĭ �Ʒ��� 3ĭ ��=> ��ü������� C���� �Ұ�
	//���簢��, ���簢�� ������� �迭�� ����, �����Ͽ� Ȱ���� ���� 
	
	int main(){
		int a[2][3]={{1,2,3},{11,12,13}};
		
		for(int i=0;i<2;i++){
			for(int j=0;j<3;j++){
				printf("%3d",a[i][j]);
			}
			printf("\n");   //i�� j�� ������� �Ѵ�
}   //2���� �迭 ���� ����?
      ��  ��  ��  ��  �� 
1�г� 10  20  30   40  50
2�г�
3�г�

//

// �� �г⺰ ������ ���غ��� 

int stu[3][5];
for(int i=0;i<3;i++){
	for(int j=0;j<5;j++){
		scanf("%d",&stu[i][j]);
	}
}			 


for (int i=0;i<3;i++){
	printf("%d�г� ���� :",i+1);
	int sum=0;
	for(int j=0;j<5;j++){
		sum+=stu[i][j];
	}
	printf("%d���̴�.\n",sum);
}


// ���� ����
int stu[3][5];
for(int i=0;i<3;i++){
	for(int i=0;i<5;i++){
		scanf("%d",&stu[i][j]);
	}
} 

for (int i=0;i<5;i++){
	printf("%d����  ���� :",i+1);
	int sum=0;
	for(int j=0;j<3;j++){
		sum+=stu[j][i];
	}
	printf("%d���̴�.\n",sum);
}


//���� �??
//1�� 1��(���)=>arr[0][0]
//x�� y��? => arr[x-1][y-1];

  ��  ��  ��  ��  �� 
1�г� 10  20  30   40  50
2�г�
3�г�

//���г�����, ������ �������� (���� 2�� �Է�)
// 1 20->fail  // 1 31->




int stu[3][5];
for(int i=0;i<3;i++){
	for(int i=0;i<5;i++){
		scanf("%d",&stu[i][j]);
	}
} 

int x,y;
printf("\n�г�� ������ �Է��ϼ���");
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
printf("%� ����. for�� ������ ������ ���� �׾������ ������



 
	 
	
	
	
	
	 
