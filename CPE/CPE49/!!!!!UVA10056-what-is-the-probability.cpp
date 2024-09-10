#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int s = 0;
    cin >> s;
    while(s--){
        double p = 0;
        int n = 0, i = 0;
        cin >> n >> p >> i;
        if(p == 0){ cout << "0.0000\n"; continue;}
        double first = pow(1.0 - p, i - 1) * p;
        double r = pow(1.0 - p, n);
        cout << fixed << setprecision(4) << first / (1.0 - r) << "\n";
    }
    return 0;
}