#include <stdio.h>

int main(){
	int a;
	int num;
	
	printf("enter a number: ");
	scanf("%d", &num);
	num % 2 == 1 ? printf("Odd") : printf("Even");
	return 0; 
}

/*
if�P�O���p�U: 
if (num % 2 == 1) printf("Odd"); 
else printf("Even"); 

�i�H��g���o��: 
num % 2 == 1 ? printf("Odd") : printf("Even"); 
*/ 

