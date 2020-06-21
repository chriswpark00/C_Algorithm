#include <stdio.h>
#include <stdlib.h>

int main(){
	int *a = (int *) malloc(3 * sizeof(int));
	int *b = (int *) calloc(3, sizeof(int));
	for(int i = 0; i < 3; i++) {
		printf("%d ", a[i]);
		printf("%d \n", b[i]);
	}
	
	return 0;
}
