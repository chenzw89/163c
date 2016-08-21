#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int number = rand()%100 + 1;
	int count = 0;
	int guess = 0;
	
	printf("我已经想好了一个1到100之间的数。");
	do {
		printf("请猜这个1到100之间的数字：");
		scanf("%d", &guess);
		if (guess > number) {
			printf("你猜的数字太大了。\n");
		}
		else if (guess < number) {
			printf("你猜的数字太小了。\n");
		}
		count ++;
	} while (guess != number);
	printf("太好了！你用了%d次猜到答案。\n", count);
	
	return 0;
}
