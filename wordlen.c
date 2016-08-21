#include <stdio.h>

int main(void)
{
	char a;
	int LenofWord = 0; //word length
	int NumofWord = 0; //word count 
	int InWord = 0; //input char in a word
	
	while (a=getchar()) {
		if (a==' ') {
			InWord = 0;
			if (LenofWord) {
				if (NumofWord) {
					printf(" %d", LenofWord);
				}
				else {
					printf("%d", LenofWord);
					NumofWord++;
				}
				LenofWord = 0;
				InWord = 1;
			}
		}
		else if (a=='.'){
			if (LenofWord&&NumofWord) printf(" %d", LenofWord);
			else if(LenofWord&&!NumofWord) printf("%d", LenofWord);
			break;
		} 
		else {
			InWord = 1;
			LenofWord += 1;
		}		
	}
	printf("\n");
	 
	return 0;
}