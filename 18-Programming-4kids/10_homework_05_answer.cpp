// By Basel Bairkdar https://www.facebook.com/baselbairkdar
#include<iostream>
using namespace std;

int main() {
	const int N = 200;

	int n, a[N];

	// let's use some big value and later minimize
	int mn = 10000000;

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];

	/**
	 let's calculate Ai+Aj+j-i for every pair (i,j)
	 such that i < j
	 this can be done using nested for loops.
	 **/
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			int tmp = a[i] + a[j] + j - i;
			if (tmp < mn) {
				mn = tmp;
			}
		}
	}
	cout << mn << endl;
	return 0;
}
