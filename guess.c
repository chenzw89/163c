#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int number = rand()%100 + 1;
	int count = 0;
	int guess = 0;
	
	printf("���Ѿ������һ��1��100֮�������");
	do {
		printf("������1��100֮������֣�");
		scanf("%d", &guess);
		if (guess > number) {
			printf("��µ�����̫���ˡ�\n");
		}
		else if (guess < number) {
			printf("��µ�����̫С�ˡ�\n");
		}
		count ++;
	} while (guess != number);
	printf("̫���ˣ�������%d�βµ��𰸡�\n", count);
	
	return 0;
}
