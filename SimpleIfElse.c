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
if判別式如下: 
if (num % 2 == 1) printf("Odd"); 
else printf("Even"); 

可以改寫成這樣: 
num % 2 == 1 ? printf("Odd") : printf("Even"); 
*/ 

