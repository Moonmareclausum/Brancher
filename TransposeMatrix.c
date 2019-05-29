#include <stdio.h>
#include <stdlib.h>

char** constructMatrix(int row, int column){
	char** ms = malloc(row * sizeof(char*) ); // 挖存取每個"列"所需的記憶體大小。
	int i = 0;
	while(i < row){
		ms[i] = malloc(column * sizeof(char) ); // 挖每個列裡面的存取每個"元素"所需的記憶體大小。 
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
		scanf("%s", Matrix[i] ); // 讀取每列的輸入的字串。 
		i++;
	}
	
	for(j = 0; j < c; j++){ // loop的順序相反 -> TransposeMatrix (執行C次印R個值。) 
		for(i = 0; i < r; i++)
				printf("%c", Matrix[i][j] );
		printf("\n"); // 印完一列後換行。 
	}
	return 0;
}
