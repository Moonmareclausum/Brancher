#include <stdio.h>

int main(){
	int a;
	int n;
	if (printf("Hello\n") || printf("hi\n") ){
		a = 1;
	} else a = -1;
	printf("a = %d\n", a);
	return 0;
}

/*
¿é¥X:
Hello
a = 1

*/ 
