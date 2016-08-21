/*
input: "Hello world    how are  you "
output: "you are how world Hello"
*/

#include <stdio.h>
#include <string.h>
#define LEN 500000

int main(int argc, char *argv[])
{
	char *word[100], c;
	int inside = 0, i = 0;
	int num = 0; //word number
	
	while ((c=getchar())!='\0') {
		if (c!=' ' && inside==0) {
			num++;
			inside = 1;
			strcpy(word[num-1], c);
		} else if (c!=' ' && inside == 1) {
			strcat(word[num-1], c);
		} else if (c==' ' && inside==1) {
			inside = 0;
		}
	}
	for (i=num-1; i>0; i--) {
		printf("%s ", &word[i]);
	}
	printf("%s\n", &word[i]);
		
	return 0;
}
