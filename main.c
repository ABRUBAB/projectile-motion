#include <stdio.h>
#include <math.h>

int main()
{
	double thita, vi, T, H, R;

	printf("Initial Velocity: ");
	scanf("%lf", &vi);

	printf("Thita: ");
	scanf("%lf", &thita);

	thita = (thita * 3.14159) / 180;

	T = (2 * vi * sin(thita)) / 9.8;

	H = (pow(vi, 2) * pow(sin(thita), 2)) / (9.8 * 2);

	R = (pow(vi, 2) * sin(thita * 2)) / 9.8;

	printf("T total  = %lf seconds\n", T);
	printf("H max= %lf miters\n", H);
	printf("R = %lf miters\n", R);

	return 0;
}
