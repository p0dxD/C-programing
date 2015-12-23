//page 48
#include <stdio.h>
int any(char sentenceOne[], char sentenceTwo[]);
int sizeOfSentence(char sentence[]);

void main(){
	char s1[] = "12345678a";
	char s2[] = "loacation";

	printf("Location %d\n", any(s1,s2));
}

/*Returns the location of the first similar char*/
int any(char s1[], char s2[]){
	int s1Size = sizeOfSentence(s1);
	int s2Size = sizeOfSentence(s2);
	int i, j, k;
	i = 0;

	for(; s2Size > i; i++){
		if(s2[i] != '\0'){
			for(j = 0; s1Size > j; j++){
				if(s2[i] == s1[j])
					return j;
			}
			

			for(k = i+1; s2Size > k; k++){
				if(s2[i] == s2[k])
					s2[k] = '\0';
			}
			
		}
	}
			return -1;
}//end any



/*Returns the size of the sentence*/
int sizeOfSentence(char s[]){
	int i = 0;
	while(s[i++] != '\0');
	return --i;//minus the null
}//ened sizeOfSentence