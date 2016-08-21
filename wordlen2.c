#include<stdio.h>
#include<math.h>

int main(void) 
{
	char arr='0';
	int str =0;
	int ssd = 0;
	int gcc = 0;
	while (arr!='.') {
	    scanf_s("%c", &arr);
	    if (arr == '.') {
	        if (ssd != 0) printf("%d", ssd);
	        else break;
	    }
	    else if(arr!=' ') { 
	        ++ssd;
	        gcc = 1;
	        if (str) {
	            printf(" ");
	            str = 0;
	        }
	    }
	    else {
	        if (ssd != 0) printf("%d",ssd);
	        ssd = 0;
	        if (gcc == 1) str = 1;
	    }
	}
	
	return 0;
}
