#include <stdio.h>

void main()
{
	long nc;

	nc = 0;
	while (getchar() != EOF) {
		nc++;
		printf("%3ld", nc);
	}
	printf("test");
}