//exercise 1-4
#include <stdio.h>

void main(){
	float fahr, cel;
	int lower, upper, step;

	lower = 0;//lowest term to start at C
	upper = 300;//upper limit for C
	step = 20;//how much we are jumping at

	cel = lower;
	printf("Cel to Fahr\n");

	while(upper >= cel){//loop till it reaches 300
		fahr = cel*(9.0/5.0)+32;//do the calculation
		printf("%1.1f\t%6.1f\n",cel, fahr);//print out the result
		cel = cel + step;//step each term by 20
	}
}