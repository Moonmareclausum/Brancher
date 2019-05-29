#include <stdio.h>
#include <stdlib.h>

int** constructMDP(int r, int c);
void printMDA(int m[][2], int n);
void printMDP(int** m, int r, int c);

void printMDA(int m[][2], int n){ // { {1,2}, {3,4}, {5,6} }, 3
	int i = 0;
	int j;
	while( i < n ){
		j = 0;
		while( j < 2 ){ 
			printf("m[%d][%d] = %d\n", i, j, m[i][j]);
			j++;
		}
		i++;
	}
}

void printMDP(int** m, int r, int c){ // { {1,2}, {3,4}, {5,6} }, 4, 3
	int i = 0;
	int j;
	while( i < r ){
		j = 0;
		while( j < c ){ 
			printf("m[%d][%d] = %d\n", i, j, m[i][j]);
			j++;
		}
		i++;
	}
}

int** constructMDP(int r, int c){
	int i = 0;
	int **ans = malloc( r * sizeof(int*) );
	while( i < r ){
		ans[i] = malloc( c * sizeof(int) );
		i++;
	}
	return ans;
}

int main(void){
	int marr[3][2] = { {1,2}, {3,4}, {5,6} }; 
	printMDA(marr, 3);
	// marr有3個元素，每個元素有2個元素。 
	int** mptr = constructMDP(4, 3);  
	// mptr是一個指標int*的陣列，含有4個元素(指標int*)。 
	// mptr[0]是一個int的指標(陣列)，有3個元素(int)。 
	int *p;
	int i, j = 0;
	
	for(i = 0; i < 4; i++)
		for(j = 0; j < 3; j++) mptr[i][j] = i*(1+j);
	printMDP(mptr, 4, 3);
	return 0;	
}

/*
printMDA()

m[0][0] = 1
m[0][1] = 2
m[1][0] = 3
m[1][1] = 4
m[2][0] = 5
m[2][1] = 6
*/

/*
printMDP()

m[0][0] = 0
m[0][1] = 0
m[0][2] = 0
m[1][0] = 1
m[1][1] = 2
m[1][2] = 3
m[2][0] = 2
m[2][1] = 4
m[2][2] = 6
m[3][0] = 3
m[3][1] = 6
m[3][2] = 9
*/
