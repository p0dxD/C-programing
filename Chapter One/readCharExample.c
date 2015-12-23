/* read char example */
#include <stdio.h>

void main(){
	int c;//use int because we must acount for EOF and large char
	c = getchar();

	while(c != EOF){
	putchar(c); //prints char
	//printf("Char input: %c\n",c);
	c = getchar(); //gets char

	}
}