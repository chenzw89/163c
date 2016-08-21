#include <stdio.h>

struct point {
	int x;
	int y;
};

struct date {
	int month;
	int day;
	int year;
} today, *t = &today;

struct point getStruct(void);
void output(struct point);
struct point *inputPoint(struct point *p);

int main(int argc, char const *argv[])
{
	struct point y = {0, 0};
	y = getStruct();
	output(y);
	
	inputPoint(&y);
	output(y);
	
	today.month = 8;
	printf("t->month = %d\n", t->month);
	
	return 0;
}

struct point getStruct(void) {
	struct point p;
	scanf("%d", &p.x);
	scanf("%d", &p.y);
	return p;
}

void output(struct point p) {
	printf("%d %d\n", p.x, p.y);
}

struct point *inputPoint(struct point *p) {
	scanf("%d", &(p->x));
	scanf("%d", &(p->y));
	return p;
}
