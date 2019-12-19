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





class Solution {
public:
	int myAtoi(string str)
	{
		int startIndex = -1;
		int endIndex = -1;
		bool start = false;

		for (int i = 0; i < str.size(); i++)
		{

			if (str[i] == ' ' && !start)
			{
				continue;
			}
			else if (str[i] == '+' || str[i] == '-' || isdigit(str[i]) && startIndex == -1)
			{
				start = true;
				startIndex = i;
			}

			else if (isalpha(str[i]) && !start)
				return 0;

			else if (startIndex != -1 && !isdigit(str[i]))
			{
				endIndex = i - 1;
				break;
			}

			else if (startIndex != -1 && str[i] == '.')
			{
				endIndex = i - 1;
				break;
			}
		}

		if (startIndex == -1)
			return 0;

		if (endIndex == 0)
			str = str.substr(startIndex, (endIndex - startIndex + 1));
		else
		{
			str = str.substr(startIndex, (endIndex - startIndex));
		}

		long long checkNum = stol(str);
		if (checkNum < INT_MIN)
			return INT_MIN;
		if (checkNum > INT_MAX)
			return INT_MAX;
		return stoi(str);
	}
};