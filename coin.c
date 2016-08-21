#include <stdio.h>

int main(void)
{
	int x, possibility;
	int one, two, five;
	
	possibility = 0;
	
	scanf("%d", &x);
	for (one = 1; one < x * 10; one++) {
		for (two = 1; two < x * 10 / 2; two++) {
			for (five = 1; five < x * 10 /5; five++){
				if (one + two *2 + five * 5 == x * 10) {
					printf("We can use %d ones and %d twos and %d fives conis to get %d Yuan.\n", 
					one, two, five, x);
					possibility++;
//					break;
				}
			}
		}
	}
	
	printf("Possibilities = %d\n", possibility);
	
	return 0;
}
