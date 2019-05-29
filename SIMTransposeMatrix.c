#include <stdio.h>
#include <stdlib.h>

char** constructMatrix(int row, int column){
	char** ms = malloc(row * sizeof(char*) ); 
	int i = 0;
	while(i < row){
		ms[i] = malloc(column * sizeof(char) ); 
		i++;
	}
	return ms;
}

void inputMatrix(char** Matrix, int row){
	int i = 0;
	while(i < row){
		scanf("%s", Matrix[i] );
		i++; 
	} 
}

void printTransposedMatrix(char** Matrix, int column, int row){
	int i = 0;
	while(i < column){
		int j = 0;
		while(j < row){
			printf("%c", Matrix[j][i] );
			j++;
		}	
		printf("\n");
		i++; 
	}
}

int main(){
	int r, c;
	scanf("%d %d", &r, &c);
	printf("%d %d\n", r, c);
	char **Matrix = constructMatrix(r, c);
	inputMatrix(Matrix, r);
	printTransposedMatrix(Matrix, c, r);
	return 0;
}
