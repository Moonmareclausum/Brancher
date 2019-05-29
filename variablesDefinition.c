/*  
時間(變數的生滅lifecycle)：
	動態變數(dynamic variables)：生於宣告，終於右大括號 }。 
	靜態變數(static variables)：生於程式啟動，終於程式結束(自始至終都在)。 
	
空間(可以存取變數的範圍scope)：
�H 	區域變數(local variables)：在任何大括號內宣告的變數，即為區域變數。 
�H 	全域變數(global variables)：不存在。 
*/ 

#include <stdio.h>

int a; // dynamic variables, global variables
int main(){
	static int b; // static variables, local variables
	int c; // dynamic variables, local variables
	return 0;
}

/*
int a; // 全域變數,  動態變數 

{
	static int a; // 區域變數, 靜態變數 
	int a; //區域變數, 動態變數 
}

int main(){


}

*/
