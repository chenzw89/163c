#include <stdio.h>

int isPrime(int n);	//��������

int main(void)
{
	int n;
	
	scanf("%d", &n);
	printf("%d=", n);	
	while (!isPrime(n)) { //���n��Ȼ�������� 
		//��ô�ͷֽ�n����n��Сһ����ͬʱ�Ѵ�ʱn�ĵ�һ�����Ӵ�ӡ���� 
		int i = 0;
		for (i=2; i<=n/2; i++) {
			if (n%i==0) {
				n /= i;
				printf("%dx", i);
				break;
			}
		}
	}
	printf("%d\n", n);
	
	return 0;
}

int isPrime(int n)
{
	int k = 1;
	
	for (int i=2; i<n; i++) {
		if (n%i==0) {
			k = 0; 
			break;
		}
	}
	
	return k;
}
