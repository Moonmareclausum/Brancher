/* APCS筆記 */
/* Agenda Array-Array by Pointer */
/* 作業 Interval.c */

#include <stdio.h>
#include <stdlib.h>

int InPut(int* len, int n1){
	int i = 0;
	while(i < n1){
		scanf("%d", &len[i]);
		i++;
	}
}

int PrintOut(int* len, int j, int n2){
	int k = j + 1;
	while(k < n2){
		printf("(%d,%d)", len[j], len[k]);
		k++;
	}	
}

int main(){
	int num;
	int* s;
	scanf("%d", &num);
	s = malloc(num * sizeof(int) );
	
	InPut(s, num);
	
	int j = 0;
	while(j < num){
		PrintOut(s, j, num);
		j++;
	}
	
	return 0;
}

/*
Note 1. 指標可以被理解成是一個「有彈性的陣列」，所以，陣列也可以被理解成是指標的一種。
Note 2. 據說，指標的「寫法」一般會比陣列的「寫法」效能更好。
Note 3. 陣列的錯誤用法 —> 指標的正確用法
陣列（X）

	int num;
	scanf( "%d", &num ); 
	int s[num];
	
指標（O）

	int num;
	int* s;
	scanf( "%d", &num );
	s = malloc( num * sizeof(int) );
	
從上面例子，在宣告 num 後若 num 非被定義或賦值成「常數」或「一個固定的Value」，那麼同時宣告陣列 s[num] 的寫法便十分危險。這時候若把指標看成是一個「有彈性的陣列」，運用指標去改寫上面錯誤的例子，便可以解決這個問題。
Note 4. 上面的主程式 int main(){} 裡的程式碼可以改得更為精簡，將更多類似迴圈、「處理事情」的東西，用「外包」的方式處理，將其定義為函數，或是「物件」（這方面我還不太清楚），精簡程式碼，使可讀性、效能提升。
Note 5. 命名函數為「e04」或是命名其他變數為「無意義之字樣」是一個極其無聊、不好笑、幼稚、自找麻煩的習慣。應該立刻改掉此習慣。
*/


