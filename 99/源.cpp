#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 2;
	int b = 3;
	int c = 4;
	int z = 1;
	int m = 3;
	scanf("%d,%d,%d,%d", &a, &b, &c, &m);
	if (a < b)
	{
		z = a;
		a = b;
		b = z;
	}
	if (a < c)
	{
		z = a;
		a = c;
		c = z;
	}
	if (a < m)
	{
		z = a;
		a = m;
		m = z;
	}
	if (b < c)
	{
		z = b;
		b = c;
		c = z;
	}
	if (b < m)
	{
		z = b;
		b = m;
		m = b;
	}
	if (c < m)
	{
		z = c;
		c = m;
		m = z;
	}
	printf("%6d%6d%6d%6d", a, b, c, m);
	return 0;
}