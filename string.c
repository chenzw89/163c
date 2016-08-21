#include <stdio.h>
#include <string.h>

int main(void) 
{
	//字符数组赋初值
	char cArr[] = {'Q', 'U', 'A', 'N', 'X', 'U', 'E'};
	//字符串赋初值
	char sArr[] = "quanxue";
	
	//使用sizeof()求长度
	printf("Length of cArr = %d\n", sizeof(cArr));
	printf("Length of sArr = %d\n", sizeof(sArr));
	
	//使用printf的%s 打印内容
	printf("Content of cArr = %s\n", cArr);
	printf("Content of sArr = %s\n", sArr);
	
	//用strlen()求长度
	printf("Length of cArr = %d\n", strlen(cArr));
	printf("Length of sArr = %d\n", strlen(sArr)); 
	
	return 0;
}
