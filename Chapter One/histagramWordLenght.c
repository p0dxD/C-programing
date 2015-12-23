//Exercise 1-13
#include <stdio.h>
#define MAXSIZEOFWORD 10
void main(){
	int histogram[MAXSIZEOFWORD]; //it can have size up to 10
	int c, i, size;

	i = size = 0;
	//initializing array
	for(; i < MAXSIZEOFWORD; i++)
		histogram[i] = 0;//initial value 0

	while((c = getchar())!= EOF){
		if(c == ' '||c == '\n'){
			++histogram[size];//increase the count at the size
			size = 0; //make size 0 again
		}else{
			size++;
		}
	}

	printf("Result = ");

	for(i = 0; i < MAXSIZEOFWORD; i++){
		if(histogram[i]!=0){
			printf("%d %d\n", histogram[i], i);
			printf()
		}
	}
}