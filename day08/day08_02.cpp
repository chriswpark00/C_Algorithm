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
#include <stdlib.h>
void quick_sort(int *arr, int n, int left, int right){
	while(1){
		if(arr[0] > arr[left]){
			left++;
		} else{
			break;
		}
	}
	while(1){
		if(arr[0] < arr[right]){
			right--;
		}else{
			break;
		}
	}
	
	if(left < right){
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		return quick_sort(arr, n, left, right);
	} else{
		int tmp = arr[0];
		arr[0] = arr[right];
		arr[right] = tmp;
		divide(arr, right, n);
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
	 
	quick_sort(arr, 10, 1, n - 1);
	
	/////////////////
	printf("������ : ");
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
	
}
