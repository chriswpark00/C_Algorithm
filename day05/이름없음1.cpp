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
			int cnt=1; //Ä«¿îÆÃ À¯ÀÇÇÏÀÚ 
			while(a[i]==a[i+1]){
				i++;
				cnt++;
			}
			printf("%d %d",cnt, a[i]);
		}
	}
	return 0; 
	}
	
	//´ÙÂ÷¿ø ¹è¿­
	// int arr[3]={1,2,3};  1Â÷¿ø ¹è¿­(Åë»óÀûÀÓ)
	// int ARR[2][3]= {{1,2,3} , {1,2,3}}; // int ARR[Çó][¿­]; 
	//2Â÷¿ø ¹è¿­ ->3°³Â¥¸® Àú·± ¹è¿­ÀÌ 2°³ ÀÖ´Ù 
	
	//·¡±âµå ¹è¿­, ºñÁ¤¹æÇü ¹è¿­ À§´Â 2Ä­ ¾Æ·¡´Â 3Ä­ µî=> °´Ã¼ÁöÇâ¾ğ¾î¿©¼­ C¾ğ¾î´Â ºÒ°¡
	//Á÷»ç°¢Çü, Á¤»ç°¢Çü ¸ğ¾çÀ¸·Î ¹è¿­À» »ı¼º, ÀúÀåÇÏ¿© È°¿ëÇÒ ¿¹Á¤ 
	
	int main(){
		int a[2][3]={{1,2,3},{11,12,13}};
		
		for(int i=0;i<2;i++){
			for(int j=0;j<3;j++){
				printf("%3d",a[i][j]);
			}
			printf("\n");   //i¿Í j¸¦ ¸ÂÃçÁà¾ß ÇÑ´Ù
}   //2Â÷¿ø ¹è¿­ ¾ğÁ¦ ¾µ±î?
      ±¹  ¿µ  ¼ö  »ç  °ú 
1ÇĞ³â 10  20  30   40  50
2ÇĞ³â
3ÇĞ³â

//

// °¢ ÇĞ³âº° ÃÑÇÕÀ» ±¸ÇØº¸ÀÚ 

int stu[3][5];
for(int i=0;i<3;i++){
	for(int j=0;j<5;j++){
		scanf("%d",&stu[i][j]);
	}
}			 


for (int i=0;i<3;i++){
	printf("%dÇĞ³â ÃÑÇÕ :",i+1);
	int sum=0;
	for(int j=0;j<5;j++){
		sum+=stu[i][j];
	}
	printf("%dÁ¡ÀÌ´Ù.\n",sum);
}


// °ú¸ñº° ÃÑÇÕ
int stu[3][5];
for(int i=0;i<3;i++){
	for(int i=0;i<5;i++){
		scanf("%d",&stu[i][j]);
	}
} 

for (int i=0;i<5;i++){
	printf("%d°ú¸ñ  ÃÑÇÕ :",i+1);
	int sum=0;
	for(int j=0;j<3;j++){
		sum+=stu[j][i];
	}
	printf("%dÁ¡ÀÌ´Ù.\n",sum);
}


//¸îÇà ¸î¿­??
//1Çà 1¿­(±â»ç)=>arr[0][0]
//xÇà y¿­? => arr[x-1][y-1];

  ±¹  ¿µ  ¼ö  »ç  °ú 
1ÇĞ³â 10  20  30   40  50
2ÇĞ³â
3ÇĞ³â

//¸îÇĞ³âÀÎÁö, Á¡¼ö°¡ ¸îÁ¡ÀÎÁö (Á¤¼ö 2°³ ÀÔ·Â)
// 1 20->fail  // 1 31->




int stu[3][5];
for(int i=0;i<3;i++){
	for(int i=0;i<5;i++){
		scanf("%d",&stu[i][j]);
	}
} 

int x,y;
printf("\nÇĞ³â°ú Á¡¼ö¸¦ ÀÔ·ÂÇÏ¼¼¿ä");
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
printf("%ö ¾ø´Ù. for¹® ¹ÛÀ¸·Î ³ª°¡´Â ¼ø°£ Á×¾î¹ö¸®±â ¶§¹®¿¡



 
	 
	
	
	
	
	 
