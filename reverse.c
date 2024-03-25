#include <stdio.h>
#include "revlib.h"

int main()
{
	int x;
	printf("Please type an integer: ");
	scanf("%d", &x);
	printf("The result is: ");
	printf("%d\n", reverse(x));
}
