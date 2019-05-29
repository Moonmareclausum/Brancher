#include<stdio.h>
#include<stdlib.h>

char* toBitString(int n){
	int end = 8 * sizeof(int);
	char* bs = malloc( end * sizeof(char) + 1); // +1 是為了給 '\0'。 
	int i = 0, mask = 1; // 宣告mask。 
/*
	while( i < end){
		bs[end-i-1] = (n & 1) == 1? '1' : '0'; // 用1做&，從第1個做到第32個。 
		n = n>>1; // 所有字元往右移1。
		i++;
	}
*/
	// 或是把1的遮罩改掉。 
	while( i < end){
		bs[end-i-1] = (n & mask) == 0? '0' : '1'; // 用1做&，從第1個做到第32個。mask往左移 。 
		mask = mask<<1;
		i++;
	} 

	bs[end] = '\0';
	return bs;
	
}

int main(void){
	int a = 10;
	printf("%s\n", toBitString(a));
	return 0;
}
