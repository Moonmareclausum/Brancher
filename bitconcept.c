#include <stdio.h>

int main(){

	int a = 3; // 0...0 0011
	int b = 5; // 0...0 0101
	int c = a & b; // 0...0 0001
	int d = a | b; // 0...0 0111
	int e = ~a; // 1...1 1100
	int f = a ^ b; // 0...0 0110
	
	int g = a << 3; // µ¥¦P­¼ 2^3 
	printf("%d", g);
}

/*

  +  - 
+ ++ +-

- -+ --

     000000000000000000101
	                1
						

false & false = 0
false & true = 0
true & false = 0
true & true = 1

*/






