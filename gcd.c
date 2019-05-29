#include <stdio.h>

int gcd(int b,int s){
	if (b >= s){
		if (b % s == 0) return s;
		else return gcd(s, b % s);
	}
	else if (b < s) return gcd(s, b);
} 

int main(){
	int x, y;
	printf("enter two numbers x, y: ");
	scanf("%d,%d", &x, &y);
	printf("gcd(%d, %d) = %d", x, y, gcd(x, y) );
	return 0;
}
 
