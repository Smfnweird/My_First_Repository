#include <stdio.h>

void addVector(int vector[], int scaler, int length)
{
	for(int i = 0; i < length; i++)
	{
		vector[i] += scaler;
	}
}

int main(int argc, char **argv)
{
	int x;
	int y;
	int scaler = 2;

	printf("What is the x pos in the vector?: ");
	scanf("%d", &x);

	printf("What is the y pos in the vector?: ");
	scanf("%d", &y);

	int vector[] = {x, y};

	addVector(vector, scaler, sizeof(vector) / sizeof(vector[0]));

	printf("[%d, %d]", vector[0], vector[1]);
}
