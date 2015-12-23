#include <stdio.h>

void main(){
	long nc;
	nc =0;//initial count

	while(getchar()!= EOF){
		++nc;
		printf("%ld\n",nc);
	}

}