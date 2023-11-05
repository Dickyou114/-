#include <stdio.h>
#include <math.h>
int main(void)
{
	float a, b, c, x1, x2, s;

	printf("enter\"a\"=");
	scanf_s("%f", &a);
	getchar();
	printf("enter\"b\"=");
	scanf_s("%f", &b);
	getchar();
	printf("enter\"c\"=");
	scanf_s("%f", &c);
	getchar();

	s = sqrt(b * b - 4 * a * c);
	x1 = (0 - b + s) / (2 * a);
	x2 = (0 - b - s) / (2 * a);

	printf("x1=%f,x2=%f", x1, x2);
	getchar();

	return 0;
}