#include <bits/stdc++.h>
using namespace std;

vector<int> findSubArray(vector<int> arr, int k) {
	int i = 0, j = 0, longest = 0, current_sum = 0, current_len = 0;
	vector<int> result;

	while(i < arr.size()) {
		if((j == arr.size() - 1) && current_sum >= k) {
			if(current_sum == k) {
				for(int a = i; a <= j; a++) {
					result.insert(result.begin(), arr.begin() + i, arr.begin() + j);
				}
			}

			i++;
			j = i;
			current_len = 0;
		}

		current_sum += arr[i];
		current_len++;
		longest = max(longest, current_len);
	}

	return result;
}


int main() {
	vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int k = 6;

	vector<int> result = findSubArray(arr, k);
	for(int i = 0; i < result.size(); i++) {
		cout << result[i] << endl;
	}
	return 0;
}
