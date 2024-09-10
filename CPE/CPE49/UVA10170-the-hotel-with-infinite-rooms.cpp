#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long s = 0, d = 0;
    while(cin >> s >> d){
        long long day = 0;
        long long start = s;
        while(day < d){
            day += start;
            start++;
        }
        cout << start - 1 << "\n";
    }
    return 0;
}