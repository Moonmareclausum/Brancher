/* APCS���O */
/* Agenda Array-Array by Pointer */
/* �@�~ Interval.c */

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
Note 1. ���Хi�H�Q�z�Ѧ��O�@�ӡu���u�ʪ��}�C�v�A�ҥH�A�}�C�]�i�H�Q�z�Ѧ��O���Ъ��@�ءC
Note 2. �ڻ��A���Ъ��u�g�k�v�@��|��}�C���u�g�k�v�į��n�C
Note 3. �}�C�����~�Ϊk �X> ���Ъ����T�Ϊk
�}�C�]X�^

	int num;
	scanf( "%d", &num ); 
	int s[num];
	
���С]O�^

	int num;
	int* s;
	scanf( "%d", &num );
	s = malloc( num * sizeof(int) );
	
�q�W���Ҥl�A�b�ŧi num ��Y num �D�Q�w�q�ν�Ȧ��u�`�ơv�Ρu�@�өT�w��Value�v�A����P�ɫŧi�}�C s[num] ���g�k�K�Q���M�I�C�o�ɭԭY����Ьݦ��O�@�ӡu���u�ʪ��}�C�v�A�B�Ϋ��Хh��g�W�����~���Ҥl�A�K�i�H�ѨM�o�Ӱ��D�C
Note 4. �W�����D�{�� int main(){} �̪��{���X�i�H��o�󬰺�²�A�N��h�����j��B�u�B�z�Ʊ��v���F��A�Ρu�~�]�v���覡�B�z�A�N��w�q����ơA�άO�u����v�]�o�譱���٤��ӲM���^�A��²�{���X�A�ϥiŪ�ʡB�įണ�ɡC
Note 5. �R�W��Ƭ��ue04�v�άO�R�W��L�ܼƬ��u�L�N�q���r�ˡv�O�@�ӷ���L��B���n���B���X�B�ۧ�·Ъ��ߺD�C���ӥߨ�ﱼ���ߺD�C
*/


