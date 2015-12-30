//Exercise 3-3
#include <stdio.h>
#include <string.h>
#define MAXTERMS 100

void expand(char s[], char s2[]);
int expander(char start, char end, char s[], int index);

void main(){
	char s[] = "a-z0-9";
	// char s[] = "-4-9-c-a-z";
	char s2[MAXTERMS];

	expand(s, s2);
}
/*Exapnds a sequence*/
//conditions i will check for 
//1) starts with - or starts with a letter/number
//2) after the first step it cotinues with - or a letter or number
//3) will not take into consideration the ending of - or repeated --
//a-ab-c
void expand(char s[], char s2[]){
	int size = strlen(s);
	int index = 0;

	int loc = 0;
while(index < size){
	if(s[index] == '-'){
		if(s[index+1] >= '0' && s[index+1] <= '9')
			loc = expander('0', s[index+1], s2, loc);
		else
			loc = expander('a', s[index+1], s2, loc);
	(s[index+2] != '-') ? (index += 2): (index ++);

	}else{
			loc = expander(s[index], s[index+2], s2, loc);
			//depending on the third letter we will increase 2 or 3
			(s[index+3] != '-') ? (index += 3): (index += 2);
	}

}
		s2[loc] = '\0';
printf("%s\n", s2);
}
/*helper function*/
int expander(char start, char end, char s[], int index){

	for(; start <= end; start++, index++)
		s[index] = start;

return index;
}