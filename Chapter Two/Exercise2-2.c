#include <stdio.h>
const int lim = 10;//better use enum
enum limits {LIMIT = 10, LIMIT_TWO = 15 };
int main(){
	int c, i;
	//lim = 10;

	for(i = 0; i < lim-1; i++){
		c = getchar();
		if(c == '\n'){
			break;
		}else if(c == EOF){
			break;
		}else{
			putchar(c);
		}
	}
	printf("\n");

		
		for(i = 0; i < LIMIT_TWO-1; i++){
		c = getchar();
		if(c == '\n'){
			break;
		}else if(c == EOF){
			break;
		}else{
			putchar(c);
		}
	}
	printf("\n");
}