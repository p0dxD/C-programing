//exercise 1- 8
#include <stdio.h>
void main(){
	int c;

	while((c = getchar())!=EOF){
		if(c == ' '){
			while((c = getchar())==' ');
			putchar(' ');
			if((c)==EOF) break;
		}
		putchar(c);
	}
}