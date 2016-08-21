#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 80

//read a line into a string
char *get_str(char *s, int lim); 

int main()
{
    char s1[N] = "", s2[N] = "";
    char *s3;
    
    //get s1 and s2
	get_str(s1, N);
	get_str(s2, N);
//	gets(s1);
//	gets(s2);
		
	char *s4 = (char *)malloc((int)N);
	strcpy(s4, s1);
		
	while (s3=strstr(s4, s2)) {
		//get left string of s2
		char temp = *s3;
		*s3 = '\0';
		char *s5 = (char *)malloc((int)N);
		strcpy(s5, s4);
		*s3 = temp;
		//free(s5);
		//get right string of s2
		char *s6 = &s3[strlen(s2)];
		//connect left string and right string without s2;
		s4 = strcat(s5, s6);
	}
	
	printf("%s\n", s4);	
	free(s4);
	    
    return 0;
}

char *get_str(char *s, int lim) {
	int i = 0;
	char c = 0;
	
	while (i<lim && (c=getchar())!='\0' && c!='\n') {
    	s[i] = c;
    	i++;
	}
	if (c=='\n') s[i] = '\0';
	
	return s;
}
