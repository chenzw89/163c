/*
������ 3*3 
*/ 

#include <stdio.h>

int main(void)
{
	const int size = 3;
	int board[size][size];
	int i, j;
	int numofx, numof0;
	int result = -1; //-1:û��Ӯ�� 1��xӮ�� 0��OӮ
	
	//�������
	for (i=0; i<size; i++) {
		for (j=0; j<size; j++) {
			scanf("%d", &board[i][j]);
		}
	}
	//�����
	for (i=0; i<size && result==-1; i++) {
		numof0 = numofx = 0;
		for (j=0; j<size; j++) {
			if (board[i][j]==1) numofx++;
			else numof0++;
		} 
		if (numof0==size) {
			result = 0;
		}
		else if (numofx == size) {
			result = 1;
		}
	} 
	//�����
	if (result==-1) {
		for (j=0; j<size&&result==-1; j++) {
			numof0 = numofx = 0;
			for (i=0; i<size; i++) {
				if (board[i][j]==1) numofx++;
				else numof0++;
			}
			if (numof0==size) {
				result = 0;
			}
			else if (numofx==size) {
				result = 1;
			}
		}
	} 
	//���Խ��� 
	numof0 = numofx = 0;
	for (i=0; i<size; i++) {
		if (board[i][i]==1) numofx++;
		else numof0++;
	}
	if (numof0==size) {
		result = 0;
	} else if (numofx==size) {
		result = 1;
	}
	//��鷴��Խ���
	numof0 = numofx = 0;
	for (i=0; i<size; i++) {
		if (board[i][size-i-1]==1) numofx++
		else numof0++
	} 
	if (numof0==size) {
		result = 0;
	} else if (numofx==size) {
		result = 1;
	}
	
	printf("%d\n", result);
	
	return 0;
}
