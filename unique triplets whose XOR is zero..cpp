// CPP program to count the number of
// unique triplets whose XOR is 0
#include <bits/stdc++.h>
using namespace std;

// function to count the number of
// unique triplets whose xor is 0
int countTriplets(int a[], int n)
{

	// stores the count of unique triplets
	int count = 0;

	// traverse for all i, j, k pairs such that k>j>i
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n; k++) {

				int xorr = a[i] ^ a[j] ^ a[k];

				// if xor of a[i], a[j] and a[k] is 0,
				// increase count by 1
				if (xorr == 0)
					count++;
			}
		}
	}

	return count;
}
// Driver code
int main()
{
	int a[] = { 1, 3, 5, 10, 14, 15 };
	int n = sizeof(a) / sizeof(a[0]);
	cout << countTriplets(a, n);
	return 0;
}
