#include <stdio.h>

int main(void)
{
	int amount = 100;
	int price = 0;
	
	printf("�������Ԫ����");
	scanf("%d", &price);
	
	printf("������Ʊ�棨Ԫ����");
	scanf("%d", &amount);
	
	int change = amount - price;
	
	printf("����%dԪ", change);
	
	return 0;
}
