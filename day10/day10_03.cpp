/*
���� 1: �Ҽ� ã�� 
	1���� n���Ա����� �ƴ� 
	2���� n���Ա��� => return ��� 
	
	
	
	
���� 2: ��� �Լ�
1. ��� �Լ� == ��ȯ�Լ� == ��ȯȣ��
2. ����:
	� �Լ��� �ڱ��ڽ��� ó���ϱ����� �ڽ��� ȣ���ϴ� �Լ�
	-> ���丮��
	=> 	f(5) = 5 * f(4)
		f(4) = 4 * f(3)
*/

#include <stdio.h>
#include <stdlib.h>

// ���� 1 
// �Ҽ� ã��!
// ����: n�� 1�ϰ��. (���� ó��) 
int sosu(int n){
	for(int i = 2; i<=n; i++){
		if(n%i == 0){ //i �� n�� ����̴�. 
			return i; 
		}
	}
	
}

// ���� 2
// ��� �Լ� 
int f(int n){
	if(n == 1){
		return n;
	} else{
		return n * f(n-1);
	}
	
}
int main(){
	// 1.�Ҽ� ->
	int n = 5;
	if(sosu(n) == n){
		printf("n�� �Ҽ���!\n");
	}
	
	// 2. ����Լ� 
	int factorial = f(5);
	printf("%d", factorial);
	return 0; 
}
