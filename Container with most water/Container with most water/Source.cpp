#include <iostream>
#include <vector>

using namespace std;

int min(int a, int b)
{
	if (a < b)
		return a;
	else
		return b;
}

int maxArea(vector<int>& height)
{
	int maxVal = 0;
	int width = 0;
	int curHeight = 0;



	for (int i = 0; i < height.size(); i++)
	{
		for (int j = i + 1; j < height.size(); j++)
		{
			curHeight = min(height[i], height[j]);
			width = j - i;

			int temp = curHeight * width;
			if (temp > maxVal)
				maxVal = temp;
		}
	}

	return maxVal;
}

int main(int argc, char** argv)
{


	return 0;
}