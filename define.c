#include <stdio.h>
#define PI 3.1415926
#define MUL(x,y) (x) * (y) // �Ҧ��a�J�ʧ@�̦n�[�A�� 

int main(){
	int a = PI;
	double b = PI;
	printf("a = %d, b = %lf\n", a, b);
	printf("a * b = %lf", MUL(a,b) );
	return 0;
}
