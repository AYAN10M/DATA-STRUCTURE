// count the max 

#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector <int> arr = {1, 1, 1, 3, 1 , 1, 0, 0, 1, 1, 1, 1, 1, 5};
	int i = 0, max_count = 0;
	while(i < arr.size())
	{
		int count = 0;
		if(arr[i] == 1)
		{
			while(arr[i] == 1 && i < arr.size())
			{
				count++;
				i++;
			}
			max_count = max(max_count, count);
			count = 0;
		}
		else
		{
			i++;
		}
	}
	cout << max_count << endl ;
	return 0;
}