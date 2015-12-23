#include <stdio.h>

void main(){
	int c, nl;

	nl = 0;//no new lines initially
	while((c = getchar())!=EOF){
		if(c == '\n')
			++nl;
		printf("%d\n", nl);
	}
}