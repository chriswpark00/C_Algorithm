/*
요리 제작
트라하를 즐기는 아란은 전문 기술 중 요리 제작에 푹 빠져 있다. 특히 스테이크를 좋아하는 아란은 주어진 재료로 최대한 많은 스테이크를 만들고 싶다.
스테이크를 만들 때는 필요한 재료 수가 적혀 있는 레시피가 필요하다. 레시피에 쓰여있는 양 만큼의 재료를 창고에서 꺼내어서 요리하면 스테이크를 한 개 만들 수 있다. 재료 중 하나라도 모자란 경우 스테이크를 만들 수 없으며, 스테이크는 한 개 단위로만 만들 수 있다. 즉, 재료의 일부만 써서 스테이크를 일부만 만들 수는 없다.
필요한 재료 수가 적혀 있는 스테이크의 레시피와 창고에 있는 재료의 수가 주어질 때, 최대 몇 개의 스테이크를 만들 수 있는지 구하여라.


입력 형식
첫째 줄에 재료의 가짓수 N이 주어진다. (1 ≤ N ≤ 100)
둘째 줄에는 N개의 정수가 공백으로 구분되어 주어지는데, 그중 i번째 수는 창고에 있는 i번째 재료의 개수를 의미한다. 이때, 주어지는 수는 0 이상 100 이하이다.
셋째 줄에는 N개의 정수가 공백으로 구분되어 주어지는데, 그중 i번째 수는 스테이크를 만드는데 필요한 i번째 재료의 개수이다. 이때, 주어지는 수는 0 이상 100 이하이다.
요리를 만들 때 적어도 하나의 재료가 필요하다는 것이 보장된다.

출력 형식
첫째 줄에 만들 수 있는 스테이크의 최대 개수를 출력한다.

입력 예제 1
3
6 3 5
1 1 2
출력 예제 1
2

입력 예제 2
2
100 0
1 1
출력 예제 2
0

채점 방식
입력 케이스들은 다음과 같은 종류로 구별되며, 한 종류의 케이스를 다 맞추어야 그 종류에 배정된 점수를 받을 수 있다.
* 종류 1 (27점): N = 1
* 종류 2 (31점): 스테이크를 요리할 때, 모든 재료는 정확히 1개씩 사용된다.
* 종류 3 (42점): 별다른 제약조건 없음.
*/


#include <stdio.h>
#include <stdlib.h>

int cook(int * inventory, int * recipe, int n){
	int min = inventory[0]/recipe[0]; 
	for(int i = 1; i < n; i++){
		int result = inventory[i]/recipe[i];
		min = result < min ? result : min;
	}
	
	return min;
}

int cook_2(int * inventory, int * recipe, int n){
	int result = 0;
	
	// [스위치 변수]
	// 어떤 동작이 수행되었는지 되지 않아았는지를
	// 판단하는 변수
	 
	while(1){
		int sw = 0;
		for(int i = 0; i < n; i++){
			inventory[i] -= recipe[i];
			if(inventory[i] < 0){
				sw = 1;
				break;
			}
		}
		
		if(sw) break;
		
		result++;
	}
	
	return result;
} 

int main(){
	int n;
	scanf("%d", &n);
	
	
	int * inventory = (int *) calloc(n, sizeof(int)); //보유 갯수 
	int * recipe = (int *) calloc(n, sizeof(int)); //필요한 갯수 
	for(int i = 0; i < n; i++){
		scanf("%d", &inventory[i]);
	}
	
	for(int i = 0; i < n; i++){
		scanf("%d", &recipe[i]);
	}
	/////////////////////////////////////////////////////
	int result = cook(inventory, recipe, n);
	int result2 = cook_2(inventory, recipe, n);
	
	printf("스테이크 %d개\n", result);
	printf("스테이크 %d개\n", result2);
	
}
