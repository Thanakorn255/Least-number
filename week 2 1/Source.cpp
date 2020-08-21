#include<stdio.h>

int main()
{
	int a, b, c, d, e;
	scanf_s("%d\n%d\n%d\n%d\n%d", &a, &b, &c, &d, &e);

	if (a < b && a < c && a < d && a < e)
	{
		printf("num = %d\n", a);
	}
	else if (b < a && b < c && b < d && b < e)
	{
		printf("num = %d\n", b);
	}
	else if (c < a && c < b && c < d && c < e)
	{
		printf("num = %d", c);
	}
	else if (d < a && d < b && d < c && d < e)
	{
		printf("num = %d", d);
	}
	else if (e < a && e < b && e < c && e < d)
	{
		printf("num = %d", e);
	}
	else
	{
		printf("error");
	}
}