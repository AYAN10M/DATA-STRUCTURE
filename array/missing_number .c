#include <stdio.h>

int main() {
	int arr[] = {1, 2, 4, 5, 6, 9, 8, 7};
	int n = 9;
	int sum = 0;
	for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
		sum += arr[i];
	}

	int expected_sum = (n*n + n)/2;

	printf("The missing no is : %d", expected_sum - sum);
	return 0;
}