/*
�� ���� : ��κ��� ���ĵ� �����Ϳ����� ������ ����!
		: ���� ���� ���ľ˰���! 
���� ) 1 2 3 4 6 5


����(Divide) -> ����(����, Conquer) -> ����(�պ�, Combine)
[������]�� ����ϴ� �˰���
�ǹ�/�Ǻ�(==pivot) 


����)
[ (3) 5 7 9 1 10 6 2 8 4]
	  l			   r
[ (3) 2 7 9 1 10 6 5 8 4]
 	    l   r
[ (3) 2 1 9 7 10 6 5 8 4]
        r l => ���̻� ��ȯ���� �ʰ� ��! (l�� r�� ���������� ����)
		// �������ڸ��� ���� X
		// ��ȯ�Ϸ��� �ô��� �����߳�? -> ����
�Ǻ��� r ��ȯ
[ 1 2 (3) 9 7 10 6 5 8 4] �Ǻ��� ���ڸ��� ã��!

�̶� "����"
[(1) 2] [9 7 10 6 5 8 4]
[1] [2] => ����(�迭�� ��Ұ�) 1���� �Ǹ� ����! "����" 

[(9) 7 10 6 5 8 4]
        l       r
[(9) 7 4 6 5 8 10]
		     r  l => ��ȯ�Ϸ��� �ô���, �����ߴ�. => ����
�Ǻ��̶� r�̶� ��ȯ
[8 7 4 6 5 (9) 10]
[8 7 4 6 5] [10]
"����Լ�" ���� divide() 

[(8) 7 4 6 5]

// �ʿ��� ����
left, right, length, pivot(�׻� index 0), 
*/

#include <stdio.h>

void swap(int *arr, int l, int r){
	int tmp = arr[l];
	arr[l] = arr[r];
	arr[r] = tmp;
	return;
}
void quick_sort(int *arr, int start, int end){
	int pivot = arr[start];
	int l = start + 1;
	int r = end;
	
	while(l <= r){
		while(arr[l] < pivot){
			l++;
		}
		while(arr[r] > pivot){
			r--;
		}
		//��ȯ ���� 
		if(l <= r){
			swap(arr, l, r);
		}
	}
	
	//divide
	if(start<end){ // divide�� ���� 1��(�迭�� ��Ұ� 1��)�� �ɶ�����! 
		swap(arr, start, r);//�Ǻ��� r ��ȯ 
		quick_sort(arr, start, r-1);
		quick_sort(arr, r+1, end);
	}
	
}

int main(){
	int arr[10] = {3, 5, 7, 9, 1, 10, 6, 2, 8, 4};
	int n = 10;
	
	///////////////
	printf("������ : ");
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	//////////////////
	 
	quick_sort(arr, 0, n - 1);
	
	/////////////////
	printf("������ : ");
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
	
}
