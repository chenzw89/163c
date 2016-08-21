#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	char *s = "Hello, WORLD";
	int i = 0;
	
//	textmode(0xE0);
	printf("%s\n", s);
	
	for (; i < strlen(s); i++) {
		putchar(tolower(s[i]));
	}

	return 0;
}
