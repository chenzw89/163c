#include <stdio.h>
#include <string.h>

typedef struct addBook {
	char name[10];
	char birthday[10];
	char gender;
	char phone[15];
	char mobile[15];
} addbook;

int main(int argc, char *argv[])
{
	int N;
	scanf_s("%d", &N);

	addbook *friends, *p;
	p = friends;

	//get addressbook contents
	while ((p-friends)<3) {
		scanf_s("%s%s%c%s%s", p->name, p->birthday, p->gender, p->phone, p->mobile);
		p++;
	}

	//get the last line
	int K;
	scanf_s("%d", &K);
	int *array;
	for (int i = 0; i < K; i++) {
		scanf_s("%d", &array[i]);
	}

	for (int i = 0; i < K; i++) {
		if ((array[i] - 1) < N) {
			addbook *q = friends + array[i];
			printf("%s %s %s %c %s\n", q->name, q->phone, q->mobile, q->gender, q->birthday);
		}
		else {
			printf("Not Found\n");
		}
	}

	return 0;
}
