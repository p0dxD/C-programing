//page 48
#include <stdio.h>
void squeeze2(char [], char []);
int sizeOfSentence(char []);

void main(){
	char sentenceOne[] = "tcccctessaasjkdl";
	char sentenceTwo[] = "tess";

	squeeze2(sentenceOne, sentenceTwo);
}//end main

/*Finds similar letters ifrom s2, in s1 and deletes them*/
void squeeze2(char s1[], char s2[]){
	printf("Sentence one: %s\n", s1);
	printf("Sentence Two: %s\n", s2);
	int s1Size = sizeOfSentence(s1);
	int s2Size = sizeOfSentence(s2);
	char temp[s1Size];//where we will store at the end, at most s1Size
	int i, j, k;
	i = 0;
	//here we will check each char of s2 with that of
	//s1 and delete the ones in s1
	//first iteration will be for the second sentence
	for(; (s2Size > i); i++){ //check if its null or less than i
	if((s2[i] != '\0')){//we only go into these if it isnt null
//check for the words on the first sentence
		for(j = 0; s1Size > j; j++){
			if(s2[i] == s1[j])
				s1[j] = '\0';//make it null
		}
//check for all similar letters and remove them
		for(k = (i + 1); s2Size > k; k++){
			if(s2[i] == s2[k])
				s2[k] = '\0';
		}
	}
}
//move the result into the new array
	j = 0;
	for(i = 0; s1Size > i; i++){
		if(s1[i] != '\0')
			temp[j++] = s1[i];
	}
	temp[j] = '\0';
	printf("Result: %s\n", temp);
}//end squeeze

/*Returns the size of the sentence*/
int sizeOfSentence(char s[]){
	int i = 0;
	while(s[i++] != '\0');
	return --i;//minus the null
}//ened sizeOfSentence