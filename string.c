#include <stdio.h>
#include <string.h>

int main(void) 
{
	//�ַ����鸳��ֵ
	char cArr[] = {'Q', 'U', 'A', 'N', 'X', 'U', 'E'};
	//�ַ�������ֵ
	char sArr[] = "quanxue";
	
	//ʹ��sizeof()�󳤶�
	printf("Length of cArr = %d\n", sizeof(cArr));
	printf("Length of sArr = %d\n", sizeof(sArr));
	
	//ʹ��printf��%s ��ӡ����
	printf("Content of cArr = %s\n", cArr);
	printf("Content of sArr = %s\n", sArr);
	
	//��strlen()�󳤶�
	printf("Length of cArr = %d\n", strlen(cArr));
	printf("Length of sArr = %d\n", strlen(sArr)); 
	
	return 0;
}
