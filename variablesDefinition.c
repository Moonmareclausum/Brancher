/*  
�ɶ�(�ܼƪ��ͷ�lifecycle)�G
	�ʺA�ܼ�(dynamic variables)�G�ͩ�ŧi�A�ש�k�j�A�� }�C 
	�R�A�ܼ�(static variables)�G�ͩ�{���ҰʡA�ש�{������(�۩l�ܲ׳��b)�C 
	
�Ŷ�(�i�H�s���ܼƪ��d��scope)�G
�H 	�ϰ��ܼ�(local variables)�G�b����j�A�����ŧi���ܼơA�Y���ϰ��ܼơC 
�H 	�����ܼ�(global variables)�G���s�b�C 
*/ 

#include <stdio.h>

int a; // dynamic variables, global variables
int main(){
	static int b; // static variables, local variables
	int c; // dynamic variables, local variables
	return 0;
}

/*
int a; // �����ܼ�,  �ʺA�ܼ� 

{
	static int a; // �ϰ��ܼ�, �R�A�ܼ� 
	int a; //�ϰ��ܼ�, �ʺA�ܼ� 
}

int main(){


}

*/
