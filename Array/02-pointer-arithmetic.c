#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a = 20, b = 12;
	int *p1 = &a, *p2 = &b;

	printf("%d %d\n",*p1, *p2 );
	printf("%d %d %d\n",*p1, *p2 , *p1 + *p2);
	printf("%d %d %d\n",*p1, *p2 , *p1 - *p2);
	printf("%d %d %d\n",*p1, *p2 , *p1 * *p2);
	printf("%d %d %d\n",*p1, *p2 , *p1 / *p2);
	printf("%d %d %d\n",*p1, *p2 , *p1 % *p2);
	return 0;
}