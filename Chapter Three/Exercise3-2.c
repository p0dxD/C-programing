#include <stdio.h>
#define MAX 100
/*sentence, and storage*/
void escape(char s[],char t[]);
void escapeReverse(char s[],char t[]);


void main(){
	char s[] = "Hello	test\n";
	char t[MAX]; 
	char d[MAX]; 

	escape(s, t);
	printf("%s\n", t);
	escapeReverse(t,d);
	printf("%s\n", d);

}
/*Replaces tabs with \t and newlines with \n*/
void escape(char s[], char t[]){
	// printf("%s\n", s);
	int i ,j;
	i = j = 0;

	while(s[i] != '\0'){

	switch(s[i]){
		case '\t':
			t[j++] = '\\';
			t[j] = 't';
			break;
		case '\n':
			t[j++] = '\\';
			t[j] = 'n';
			break;
		default:
			t[j] = s[i]; 
			break;
	}
	i++;
	j++;
}
	t[j] = '\0';
}

/*Replaces tabs with \t and newlines with \n*/
void escapeReverse(char s[], char t[]){
	// printf("%s\n", s);
	int i ,j;
	i = j = 0;

	while(s[i] != '\0'){
		switch(s[i]){
			case'\\':
				if(s[i+1] == 't'){
					t[j] = '\t';
					i++;
				}
				else if(s[i+1] == 'n'){
					t[j] = '\n';
					i++;
				}
				break;
			default:
				t[j] = s[i];
				break;
		}
		i++;
		j++;
	}
	t[j] = '\0';
}