#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long r = 0, l = 0;
    while(cin >> r >> l){
        cout << abs(l - r) << "\n";
    }
    return 0;
}