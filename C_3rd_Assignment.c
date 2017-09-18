#include<stdio.h>

int main(void)
{

	float side = 1, area1 = 1, area2, x = 0, sum = 0;

	while (1)
	{
		area1 += sum;
		printf("side가 %f 일때 넓이의 차이는 %f - %f = %f\n", side, area1, x, area1 - x);
		side /= 2;
		sum = side*side;
		area2 = area1 - x;
		x = area1;

		if (area2 < 0.000001)
		{
			break;
		}
	}
	return 0;

}