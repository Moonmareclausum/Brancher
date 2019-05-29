#include<stdio.h>
#include<stdlib.h>

char* toBitString(int n){
	int end = 8 * sizeof(int);
	char* bs = malloc( end * sizeof(char) + 1); // +1 �O���F�� '\0'�C 
	int i = 0, mask = 1; // �ŧimask�C 
/*
	while( i < end){
		bs[end-i-1] = (n & 1) == 1? '1' : '0'; // ��1��&�A�q��1�Ӱ����32�ӡC 
		n = n>>1; // �Ҧ��r�����k��1�C
		i++;
	}
*/
	// �άO��1���B�n�ﱼ�C 
	while( i < end){
		bs[end-i-1] = (n & mask) == 0? '0' : '1'; // ��1��&�A�q��1�Ӱ����32�ӡCmask������ �C 
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
