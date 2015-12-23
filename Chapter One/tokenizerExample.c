//Exercise 1-12
#include <stdio.h>

void main(){
	int c = 0;
	while((c = getchar())!=EOF){
		if(c==' '){
			putchar('\n');
		}else{
			putchar(c);
		
		}
	}

}