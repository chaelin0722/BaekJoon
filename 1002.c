#include<stdio.h>
#include<stdlib.h>
#include <math.h>

int main(void) {
	int x1, y1, r1, x2, y2, r2, i, time;
	double d = 0;

	scanf("%d", &time);

	for (i = 0; i < time; i++) {
		scanf("%d%d%d%d%d%d", &x1, &y1, &r1, &x2, &y2, &r2);

		d = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));

		if (r1 + r2 < d) printf("0\n");
		else if (abs(r1 - r2) > d) printf("0\n");
		else if (d == 0 && r1 == r2) printf("-1\n");
		else if (d == (r1 + r2)) printf("1\n");
		else if (d == abs(r1 - r2)) printf("1\n");
		else printf("2\n");
	}//end for
	
	return 0;
}
