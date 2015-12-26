#include <stdio.h>
int binsearch(int x, int v[], int n);

void main(){
	int test[] = {1,2,3,4,5,6,7};
	int value = 3;
	int sizeA = 7;
	printf("%d\n", binsearch(value, test, sizeA));
}

int binsearch(int x, int v[], int n){
	int top = n-1;
	int low = 0;
	int mid;
	while(low <= top){
		mid = (top+low)/2;
		if(x > v[mid])
			low = mid + 1;
		else
			top = mid -1;
	}
	if(x == v[mid])
		return mid;
	else
		return -1;
}