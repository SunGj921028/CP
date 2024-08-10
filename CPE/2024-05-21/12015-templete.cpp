#include <iostream>
using namespace std;

int main() {
	int t, c = 1;
	cin >> t;
	while (t--){
		cout << "Case #" << c << ":\n";
		string url[10];
		int v[10], max_v = 0;
		for (int i = 0; i < 10; i++){
			cin >> url[i] >> v[i];
			max_v = (max_v < v[i]) ? v[i] : max_v;
		}

		for (int i = 0; i < 10; i++){
			if (v[i] == max_v){
				cout << url[i] << "\n";
			}
		}
		++c;	
	}
}