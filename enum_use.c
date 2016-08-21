#include <stdio.h>

enum COLOR {RED, YELLOW, GREEN, NumCOLORS};

int main(int argc, char const *argv[])
{
	int color = -1;
	char *ColorNames[NumCOLORS] = {
		"red", "yellow", "green"};
	char *colorName = NULL;
	
	printf("Please input the color code you like: ");
	scanf("%d", &color);
	if (color>=0 && color<=NumCOLORS) {
		colorName = ColorNames[color];
	} else {
		colorName = "unknown";
	}
	printf("You favorite color is %s\n", colorName);
	
	return 0;
}
