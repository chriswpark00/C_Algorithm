#include <stdio.h>
void show (int *arr){
	int length = sizeof(arr);
	for(int i = 1; i <= 5; i++ ){
		printf("%d\n", arr[5 - i]);
	}
}
int main(){
	// ������ ���� // ��ǥ�ϴ� �ڷ�����ŭ �����Ѵ�
	// ex) �����͸� 1 ���� ������ ��, int +4 double +8  char +1
//	int c;
//	int *pc;
//	pc = &c;
//	printf("������ ���� pc�� �� = %u\n", pc); 
//	printf("������ ���� (pc + 1)�� �� = %u\n", pc + 1);

//	char d = 'a';
//	char *pd = &d;
//	printf("d = %c %c\n", *pd, d);
//	(*pd) += 1; // �켱����!  
//	printf("d = %c %c\n", *pd, d);
//	(*pd)++;
//	printf("d = %c %c\n", *pd, d);
//	(*pd)++;
//	printf("d = %c %c\n", *pd, d);

	int arr[5] = {1, 2, 3, 4, 5};
	// ### �迭 [0]�ε����� �ּҴ� �迭�� �̸��� ����!! 
	show(arr); // &arr[0] == arr
	return 0; 
}
