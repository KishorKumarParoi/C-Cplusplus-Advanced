#include <stdio.h>
int main(int argc, char const *argv[])
{
	int marks[41];
	int *ptr;
	ptr = &marks[0];

	for(int i = 0; i < 10; ++i){
		scanf("%d", ptr);
		printf("Enter the value for student-%d : %d\n",i+1, *ptr);
		ptr++;
	}

	for(int i = 0; i < 10; ++i){
		printf("Student-%d got marks %d\n",i+1,marks[i]);
	}

	return 0;
}