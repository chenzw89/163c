#include <stdio.h>

int main(void)
{
	const int MINOR = 35;
	
	int age = 0;
	
	printf("������������䣺");
	scanf("%d", &age);
	
	printf("��������ǣ�%d��\n", age);
	
	if (age < MINOR){
		printf("���������õģ�");
	}
	
	printf("�����������ľ������磬�ú���ϧ�ɡ�\n");
	
	return 0;
}
