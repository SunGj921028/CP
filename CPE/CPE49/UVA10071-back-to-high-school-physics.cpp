#include<bits/stdc++.h>

using namespace std;

// S(t) = v0*t + 1*a*t^2/2 
// -> S(2t) = v0*(2t) + a * (2t)^2 / 2 = 2 * a * t^2 = 2 * v * t

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int v = 0, t = 0;
    while(cin >> v >> t){
        cout << 2 * v * t << "\n";
    }
    return 0;
}