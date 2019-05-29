#include <stdio.h>
#include <stdlib.h>

char* floatToBitString(int *p){
	int arret = 8 * sizeof(int);
	char* ms = malloc( arret * sizeof(char) + 1);
	int i = 0; int mask = 1; 
	while(i < arret){
		ms[arret-i-1] = *p & mask == 1? '1' : '0';
		*p = *p>>1;
		i++;
	} 

	ms[arret] = '\0';
	return ms;
}


int main (){
	float number;
	scanf("%f", &number);
	int *p;
	// p = malloc( 1 * sizeof(float) ); // �u�ݦs1��float�C 
	*p = &number; // p �� Address = number �� address�C 
	printf("%s\n", floatToBitString(*p) );
} 

