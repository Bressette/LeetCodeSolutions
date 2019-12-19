#include <iostream>

using namespace std;

double power(double x, int n)
{
	int power = n;
	double result = 1;

	while (n > 0)
	{
		if (n % 2 != 0)
		{
			result = result * x;
		}
		x = x * x;
		n = n / 2;
	}

	while (n < 0)
	{
		if (n % 2 != 0)
		{
			result = result * x;
		}
		x = x * x;
		n = n / 2;
	}

	if (power < 0)
	{
		result = 1 / result;
	}

	return result;
}




int main(int argc, char** argv)
{
	double result = power(0.00001, 2147483647);

	cout << "The result is " << result << endl;
	while (1);
	return 0;
}