#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int max);
int strindex(char source[], char searchfor[]);

char pattern[] = "ould"; // to be found in the lines

int main()
{
    char line[MAXLINE];
    int found = 0;
    
    while (getline(line, MAXLINE)>0) {
    	if (strindex(line, pattern)>=0) {
    		printf("%s", line);
    		found++;
		}
	}
    
    return found;
}

//getline function, to put the line in s and return the length
int getline(char s[], int lim) {
	int c, i;
	i = 0;
	
	while(--lim>0 && (c=getchar())!=EOF && c!='\n') {
		s[i++] = c;
	}
	if (c=='\n') s[i++] = c;
	s[i] = '\0';
	
	return i;
}

//strindex function: return location of t in s, if no return -1
int strindex(char s[], char t[]) {
	int i, j, k;
	
	for (i=0; s[i]!='\0'; i++) {
		for (j=0, k=0; t[k]!='\0' && s[j]==t[k]; j++, k++) {
			;
		}
		if (k>0 && t[k]=='\0') {
			return i;
		}
	}
	return -1;
}
