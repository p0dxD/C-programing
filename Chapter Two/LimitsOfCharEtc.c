#include <stdio.h>
#include <string.h>

int main(){
	printf("Minimum Signed Char %d\n",-(char)((unsigned char) ~0 >> 1) - 1);
	
	printf("%d\n", strlen("test"));
}