#include <stdio.h>
#define MAXLINE 1000

void reverse(char sent[], char rev[]);

int main(){
	int c , i;
	char line[MAXLINE];
	char longest[MAXLINE];

	while((c = getchar()) != EOF && c != '\n'){
		line[i++] = c;
	}
	line[i++] = '\0';

	printf("Test: %s\n", line);

	reverse(line, longest);
	printf("Reversed: %s\n", longest);

	return 0;
}

void reverse(char b[], char a[]){

	int i = 0;
	while(b[i] != '\0'){
		i++;
	}
	
	printf("Size: %d\n", i);
	a[i--] = '\0'; //add null at the end 

	int j = 0;
	while(i >= 0){
		a[i--] = b[j++];
	}
	
}