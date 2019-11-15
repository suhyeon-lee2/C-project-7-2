#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {

	int n = 5;
	int i, j;
	for (i = 1;i <= n;i++)
	{
		for (j = 1;j <= 5 - i;j++)
		{
			printf(" ", j);
		}
		for (j = i;j >= 1;j--)
		{
			printf("%d", j);
		}
		printf("\n");
	}








}