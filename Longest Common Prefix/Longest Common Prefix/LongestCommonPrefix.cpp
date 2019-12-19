#include <iostream>
#include <string>
#include <vector>

using namespace std;


int strSize(vector<string>& strs)
{
	int minVal = INT_MAX;

	for (int i = 0; i < strs.size(); i++)
	{
		if (strs[i].size() < minVal)
			minVal = strs[i].size();
	}
	return minVal;
}

string longestCommonPrefix(vector<string>& strs)
{
	int minSize = strSize(strs);
	string prefix;
	string temp;

	for (int i = 0; i < minSize; i++)
	{
		temp += strs[0][i];
		for (int j = 1; j < strs.size(); j++)
		{
			if (temp[i] == strs[j][i])
				continue;
			else
				return prefix;
		}
		prefix += strs[0][i];
	}

	return prefix;
}


int main(int argc, char** argv)
{
	vector<string> strs = { "flower", "flow", "flight" };
	string result = longestCommonPrefix(strs);
	cout << "The result is " << result << endl;
	return 0;
}