#include <stdio.h>
#include <stdlib.h>

int main (){
	float number;
	scanf("%f", &number);
	int *p = &number;
	int v = *p;
	int f = floattoBitString(v);
	printf("%s\n", f);
} 












