//gcc -o3 --omit-frame-pointer -S testCompiler.c 
#include <stdio.h>

int scheme_entry();

int main(int argc, char** argv){
	printf("%d\n", scheme_entry());
	return 0;
}

int scheme_entry(){
	return 42;
}