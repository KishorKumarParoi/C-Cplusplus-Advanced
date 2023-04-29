#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("Let's Learn about Array and Abstract Data Type Array\n");

	int marks[] = {83,24,53,25,87,98,20};
	int size = sizeof(marks)/sizeof(marks[0]);

	for(int i = 0; i < size; ++i){
		printf("%d\n", marks[i]);
	}
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