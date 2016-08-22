//统计一个长度为2的字符串在另一个字符串中出现的次数。
//例如：输入： 123456543456 （回车）
//				34 （回车）
//		输出： 2
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char *s1, s2[3] = "", *p;
	int cnt = 0;

	s1 =  (char *)malloc(100);
	
	scanf("%100s", s1);
	scanf("%3s", s2);

	while ((p = strstr(s1, s2))) {
	    cnt++;
		s1 = p + 2;		
	}
	
	printf("%d\n", cnt);

	/*free(s1);*/

	return 0;
}
