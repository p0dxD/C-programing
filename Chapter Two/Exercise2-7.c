#include <stdio.h>
void printBinary(unsigned value);
unsigned invert(unsigned x, int p, int n);
unsigned getbits(unsigned x, int p, int n);

void main(){
	int a = getbits(0xF994, 4, 3);
	int b = invert((unsigned)8, (int)3, (int)3);
	printf("a %u\n", a);
	printBinary(a);
	printf("b %u\n", b);
	printBinary(b);

}

unsigned invert(unsigned x, int p, int n){
	return   x ^ (~(~0 << n) << (p + 1 - n));
}


unsigned getbits(unsigned x, int p, int n)
{
return (x >> (p+1-n) & ~(~0 << n)); 
}








/*Helper method to print the binary*/
void printBinary(unsigned value){

	unsigned checkValue = 0x80000000;
while(checkValue > 0){
	if((value & checkValue) > 0)
		printf("%s", "1");
	else
		printf("%s", "0");

	checkValue = checkValue >> 1;
}
	printf("\n");
}