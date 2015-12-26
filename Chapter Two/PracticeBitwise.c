#include <stdio.h>
#include <limits.h>
unsigned getbits(unsigned, int, int);
void foo(void);

void main(){
	int x = 100;

	x = x & ~077;

	short y = ((65535));
	unsigned e = ~y;
	printf("X: %d y: %d\n", x, (e));
	foo();
	printf("%s\n", (((unsigned)-100) > 1)? "yes": "no");

	signed short a = 65535;
	int b = a + 100;
	int c = b;
	printf("%d\n", b);

	printf("Bits: %d\n", getbits(63892, 4, 3));
	printf("Bits: %d\n", (unsigned short)63892 >> 1);
	int a1 = -8;
	unsigned int b1 = a1 << 27;
	printf("Bits: %d\n", b1 >> 31);
}

unsigned getbits(unsigned x, int p, int n){
	return (x >> (p+1-n)) & ~(~0 << n);
}

//never mix unsigned with signed else it takes precedence of unsigned
void foo(void)
{
 unsigned int a = 6;
 int b = -20;
 // (a+b > 6) ? puts("> 6") : puts("<= 6");
 (a+b > 6) ? printf("%d\n", a+b) : puts("<= 6");
}