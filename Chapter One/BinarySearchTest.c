#include <stdio.h>
int binary(int array[], int size, int value);

int main(){
	int array[] = {1,2,5,4,6,7,8,9,10};
	int i = 0;
	for(; i < 4; i++){
		printf("%d ", array[i]);
	}
	printf("\n");
	int result = binary(array, 4, 6);
	(result == -1)?printf("Not Found\n"): printf("Index: %d\n", result);;
	return 0;
}

int binary(int array[], int size, int value){

	int lower = 0;
	int upper = size;
	int mid = size/2;

	while(lower<=upper){
		if(value < array[mid]){
			upper = mid-1;
			mid = (upper/2);
		}else if(value > array[mid]){
			lower = mid+1;
			mid = ((lower+upper)/2);
		}else{
			return mid;
		}
	}
	return -1; 
}