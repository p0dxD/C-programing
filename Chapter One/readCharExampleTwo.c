#include <stdio.h>

void main(){
	int c;
	//exercise 1-6
	printf("Enter a char: ");
	printf("c = %d\n", (getchar()!= EOF));
	//exercise 1-7
	printf("EOF is: %d\n", EOF);
	printf("Is EOF -1? %d\n", (EOF==-1));
	while((c = getchar())!=EOF){
		putchar(c);
	}
}