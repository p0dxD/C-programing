//this program will take a number possitive or negative
//and will give out the ones complement representation
//as well as the sign magnitude and two's complement 
#include <stdio.h>

void printSignedMagnitude(unsigned value);
void printTwosComplement(unsigned value);
void printOnesComplement(unsigned value);
void printBinary(unsigned value);

void main(){
 
	int value = -0xFFFFFFF; 

	printf("%s %d\n", "Testing Signed magnitude with value" , value);
	printSignedMagnitude(value);
	printf("\n");
	printf("%s %d\n", "Testing Ones complement with value" , value);
	printOnesComplement(value);
	printf("\n");
	printf("%s %d\n", "Testing Twos complement with value" , value);
	printTwosComplement(value);
}

void printSignedMagnitude(unsigned value){
	int temp = 0;
	//check if its negative or not 
	if((value & 0x80000000) > 0){
		// printf("%s %d\n", "negative", value );
		if((value & 0x7FFFFFFF) == 0)//check special case -0
			printf("%s\n", "-0");
		else{
			temp = ~(value) + 1;//get the actual value from the twos complement
			printf("Negative value two's complement: %d\n", ((unsigned)(temp | 0x80000000)));
			printBinary(((unsigned)(temp | 0x80000000)));
		}

	}else{
			printf("Positive value two's complement: %d\n", value);
			printBinary(value);
		}
	}


void printOnesComplement(unsigned value){
	if((value & 0x80000000) > 0){//see if its negative
		value--;
		if((value & 0x7FFFFFFF) == 0x7FFFFFFF)
			printf("%s\n", "-0");
		else{
			printf("Negative value two's complement: %d\n", value);
		}
	}else{
			printf("Positive value two's complement: %d\n", value);
		}
	printBinary(value);
}

void printTwosComplement(unsigned value){
	if((value & 0x80000000) > 0){//see if its negative
		printf("Negative value two's complement: %d\n", value);
	}else{
		printf("Positive value two's complement: %d\n", value);
	}
			printBinary(value);
}
/*Helper method to print the binary*/
void printBinary(unsigned value){

	unsigned checkValue = 0x80000000;
while(checkValue > 0){
	if((value & checkValue) > 0)
		printf("%s", "1");
	else
		printf("%s", "0");

	checkValue = checkValue >> 1;
}
	printf("\n");
}
