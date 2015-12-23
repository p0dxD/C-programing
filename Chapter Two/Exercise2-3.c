#include <stdio.h>
#define LIMIT 8 //max number of items, one byte

int hexToInt(char []);
float power(float, int);

void main(){
	char sentence[LIMIT];
	int c, i;

	i = 0;

	while((c = getchar())!= EOF && c != '\n' && i < LIMIT){
		if((i == 0) && c == '0')
			sentence[i++] = c;
		else if((i == 1) && (c == 'x' || c == 'X'))
			sentence[i++] = c;
		else if((c >= '0' && c <= '9') || (c >= 'a' && c<='f') || (c >= 'A' && c <= 'Z'))
			sentence[i++] = c;
		else{
			printf("Invalid.\n");
			break;
		}
	}
	sentence[i] = '\0';//null terminate it


		printf("Sentence: %s Size: %d\n", sentence, hexToInt(sentence));

		char test[] = "aa";
		printf("%d\n", hexToInt(test));
}

int hexToInt(char number[]){
	int i, j, answer;
	i = answer = j = 0;

	while(number[i] != '\0') i++;
	if(i == 0) return 0; //if its an empty string
	i--;// make it one less than actual value we want to start at 0
	// printf("%.0f\n", power(16,i));
	if(number[0] == '0' && (number[1] == 'x' || number[1] == 'X')){
		j = 2;//start at j
		i -= 2;//sub two from count
}
	while(number[j] != '\0'){
		if(number[j] >= 'A' && number[j] <= 'Z')
			answer += power(16,i--)*((number[j++]-'A')+10);
		else if(number[j] >= 'a' && number[j] <='f')
			answer += power(16,i--)*((number[j++]-'a')+10);
		else//is a normal number
			answer += power(16,i--)*(number[j++]-'0');
	}
	return answer;
}


/* raises to a power*/
float power(float x, int y)
{
    float temp;
    if( y == 0)
       return 1;
    temp = power(x, y/2);       
    if (y%2 == 0)
        return temp*temp;
    else
    {
        if(y > 0)
            return x*temp*temp;
        else
            return (temp*temp)/x;
    }
}  