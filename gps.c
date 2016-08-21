#include <stdio.h>
#include <string.h>
#define MAX_LEN 200

int CheckValue(char [], int lim);
void getline(char [], int lim);

int main(void)
{
	char line[MAX_LEN];
//	scanf("%s", line);
	char time[8];
	char bj_time[8];
	char *end = "END";
	time[2] = time[5] = ':';

	//when line not equal to end, continue to getline
	while (strcmp(line, end)) {
		if (strstr(line, "$GPRMC")) {
			if (CheckValue(line, MAX_LEN) && line[18]=='A') {
				time[0] = line[7];
				time[1] = line[8];
				time[3] = line[9];
				time[4] = line[10];
				time[6] = line[11];
				time[7] = line[12];
				
			}
		}
		// getline(line, MAX_LEN);
		scanf("%s", line);
	}
	
	// utc time to beijing time
	int t = ((int)time[0]-48) * 10 + (int)time[1]-48;
	t = (t+8) % 24;
	bj_time[0] = (char)(t/10+48);
	bj_time[1] = (char)(t%10+48);
	for (int i=2; i<8; i++) {
		bj_time[i] = time[i];
	}

	for (int i=0; i<8; i++) {
		printf("%c", bj_time[i]);
	}
		
	return 0;
}

int CheckValue(char s[], int lim) {
	int cnt_all = 0;
	int cnt_star = 0;
	int is_correct = 0;
	int value = s[1] ^ s[2];
	
	//find where * is and the length of line 
	while (s[cnt_all]!='\0' && cnt_all<lim) {
		if (s[cnt_all]=='*') {
			cnt_star = cnt_all;
		}
		cnt_all++;
	}
	for (int i=3; i<cnt_star; i++) {
		value ^= s[i];
	}
	value %= 65536;
	
	//check whether the message is correct
	int value1 = value / 16;
	if (value1==((int)s[cnt_star+1])-48) {
		int value2 = value % 16;
		if (value2>=0 && value2<=9) value2 += 48; //value2 0~9
		else {                                    //value2 A~F
			switch (value2) {
				case 10: value2 = (int)'A'; break;
				case 11: value2 = (int)'B'; break;
				case 12: value2 = (int)'C'; break;
				case 13: value2 = (int)'D'; break;
				case 14: value2 = (int)'E'; break;
				case 15: value2 = (int)'F'; break;
			}
		}
		if ((char)(value2)==s[cnt_star+2]) {
			is_correct = 1;
		}
	}
		
	return is_correct;
}

// void getline(char s[], int lim) {
// 	int i = 0;
// 	int c = 0;
	
// 	while ((c=getchar())!='\n' && c!= '\0' && i<lim) {
// 		s[i] = c;
// 		i++;
// 	}
// 	s[i] = '\0';
// }