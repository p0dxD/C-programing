//exercise 1-14
#include <stdio.h>

#define ALPHABETSIZE 26

void main(){
	int c, i;

	int histogram[ALPHABETSIZE];

	for(i = 0; i < ALPHABETSIZE; i++){
		histogram[i] = 0;
	}

	while((c = getchar())!= EOF){
		if(c <= 'z'&& c >= 'a' || c == '\n'){
			histogram['z'-c]++;
		}
	}

	printf("Result: \n");
	for(i = 25; i >= 0; i--){
		if(histogram[i] != 0){
			printf("%c %d\n", ('z' - i), histogram[i]);
			}
		}
	}
