//uva1118
#include<stdio.h>
#include<iostream>

using namespace std;

// use the array 1000000000 by 1000000000 is impossible to finish in 3 seconds
// we have to use the properties of Stirling Numbers to determine the remainder

int main(){

	int t, n, m;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		cout << (((n - m) & ((m - 1) / 2)) == 0) << endl;
	}
	return 0;
}