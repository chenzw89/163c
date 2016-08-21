#include <stdio.h>
#include <string.h>

int main(){
    char str[500001], *p = NULL;
    gets(str);
    int len=strlen(str), first = 1;
    for(int i=len-1; i>=0; --i){
        if(str[i]==' ') str[i]='\0';
        else if(str[i-1]==' '){
            p = &str[i];
            if(first) first = 0;
            else printf(" ");
            printf("%s", p);
        }
    }
    if(str[0]!='\0') {
        if(first) printf("%s", str);
        else printf(" %s", str);
    }
    printf("\n");
    return 0;
}

