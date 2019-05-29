#include <stdio.h>
#include <stdlib.h>

char** constructMatrix(int row, int column){
	char** ms = malloc(row * sizeof(char*) ); // ���s���C��"�C"�һݪ��O����j�p�C
	int i = 0;
	while(i < row){
		ms[i] = malloc(column * sizeof(char) ); // ���C�ӦC�̭����s���C��"����"�һݪ��O����j�p�C 
		i++;
	}
	return ms;
}

int main(){
	int r, c;
	scanf("%d %d", &r, &c);
	printf("%d %d\n", r, c);
	char** Matrix = constructMatrix(r, c);

	int i, j; 
	i = 0;
	while(i < r){
		scanf("%s", Matrix[i] ); // Ū���C�C����J���r��C 
		i++;
	}
	
	for(j = 0; j < c; j++){ // loop�����Ǭۤ� -> TransposeMatrix (����C���LR�ӭȡC) 
		for(i = 0; i < r; i++)
				printf("%c", Matrix[i][j] );
		printf("\n"); // �L���@�C�ᴫ��C 
	}
	return 0;
}
