#include <stdio.h>

void show(int *p){
	int length = sizeof(p)/sizeof(p[0]);
	int max = p[0];
	int result = 0;
	int min = p[0];
	int result1 = 0;
	for(int i = 0; i < 5; i++){
		if(max < p[i]){
			max = p[i];
			result = i;
		} 
		
		if(min > p[i]){
			min = p[i];
			result1 = i;
		} 
	}
	
	printf("�ּҰ� �ε��� [%d], �ִ� �ε��� [%d]", result1, result);
}

int main(){
	
	int arr[5] = {3, 1, 5, 2, 4};
	// �ִ� �� �ּڰ��� ��� �ִ� �ε��� ��ȣ�� ���
	show(arr);
}
