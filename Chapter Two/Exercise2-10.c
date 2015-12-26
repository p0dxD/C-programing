#include <stdio.h>

char toLowerCase(char letter);
void main(){
	printf("Result: %c\n",toLowerCase('A'));
	printf("Result: %c\n",toLowerCase('b'));
	printf("Result: %c\n",toLowerCase('Z'));
	printf("%u\n", -1);

}

char toLowerCase(char l){
	//if the 6th bit is not set return it set
	//else just return the same char
	//does not check boundaries
	return ((l & 0x20) == 0) ? (l | 0x20) : l; 
}