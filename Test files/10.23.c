#include <stdio.h>
#define N 10

int main() {
	int arrge[N] = {0};

	for (int i = 1; i < N; i++)
		arrge[i] = i;

	for (int i = 0; i < N; i++)
	{
		printf("%4d", arrge[i]);
	}
	printf("\n");
		
	for (int i = 0; i < N - 1; i++)
	{
		arrge[i] = arrge[i + 1];
		printf("%4d", arrge[i]);
	}

	return 0;
}