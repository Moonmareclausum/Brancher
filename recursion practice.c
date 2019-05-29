#include <stdio.h>

int function(int a){
	if (a == 1) return 2;
	else if (a == 2) return 4;
	else if (a == 3) return 7; 
	else return 2 * function(a - 1) - function(a - 2) + 4 * function(a - 3);
}
int main(){
	int number;	
	scanf("%d", &number);
	int f = function(number);
	printf("%d", f);
}

/* f(x) = f(x-1) + f(x-2) */
