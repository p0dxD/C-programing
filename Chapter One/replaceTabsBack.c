//exercise 1-10
#include <stdio.h>
void main(){
	int c, is;

	while((c = getchar())!=EOF){
		if(c !='\t' && c !='\b' && c!= '\\')
      			putchar(c);
		if(c == '\t'){
			putchar('\\');
			putchar('t');
		}
		if(c == '\\'){
			putchar('\\');
			putchar('\\');
		}
		if(c == '\b'){
			putchar('\\');
			putchar('b');
		}
  }
}