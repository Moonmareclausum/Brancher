/*  
丁(跑计ネ防lifecycle)
	笆篈跑计(dynamic variables)ネ沧珹腹 } 
	繰篈跑计(static variables)ネ祘Α币笆沧祘Α挡(﹍沧常) 
	
丁(跑计絛瞅scope)
凥 	跋办跑计(local variables)ヴ珹腹ず跑计跋办跑计 
凥 	办跑计(global variables)ぃ 
*/ 

#include <stdio.h>

int a; // dynamic variables, global variables
int main(){
	static int b; // static variables, local variables
	int c; // dynamic variables, local variables
	return 0;
}

/*
int a; // 办跑计,  笆篈跑计 

{
	static int a; // 跋办跑计, 繰篈跑计 
	int a; //跋办跑计, 笆篈跑计 
}

int main(){


}

*/
