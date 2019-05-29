#include <stdio.h>
#include <stdlib.h>

int InPut(int* len, int n1){
	int i = 0;
	while(i < n1){
		scanf("%d", &len[i]);
		i++;
	}
}


int main(){
	int num;
	int* s;
	scanf("%d", &num);
	s = malloc(num * sizeof(int) );
	
	InPut(s, num);
	printf("%d", s);
	printf("%d", *s);
	} 
