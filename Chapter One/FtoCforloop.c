#include <stdio.h>

void main(){

	int fahr;

	printf("F to C for loop\n");
	for(fahr = 0; fahr <= 300; fahr = fahr + 20){
		printf("%3d\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
	}

	//1.5 exercise
	printf("F to C for loop reverse\n");
	for(fahr =300; fahr >=0; fahr = fahr -20){
		printf("%3d\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
	}
}