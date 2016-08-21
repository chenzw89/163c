#include <stdio.h>
#include <string.h>

int mycmp(const char *s1, const char *s2);

int main (int argc, char const *argv[])
{
    char s1[] = "abc";
    char s2[] = "abd";
    printf("%d\n", mycmp(s1, s2));

    return 0;
}

int mycmp(const char *s1, const char *s2) {
    int index = 0;

    while (s1[index]==s2[index] && s1[index]!='\0') {
        index++; 
    }

    return s1[index]-s2[index];
}