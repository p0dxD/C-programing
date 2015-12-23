//Exercise 1-15
#include <stdio.h>

void farToCel(float, int, int);


void main(){
	printf("Far to Cel Function test\n");
	farToCel(0.0, 300, 20);
}

void farToCel(float starting, int upTo, int incrementSize){
	while(upTo >= starting){
		printf("%.0f \t%.2f\n", starting, ((starting-32)/1.8));
		starting = starting + incrementSize;
	}
}
