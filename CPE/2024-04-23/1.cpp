#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 0;
    cin >> t;
    while(t--){
        int r = 0;
        cin >> r;
        vector<int > s(r);
        for(int i = 0; i < r; i++){
            cin >> s[i];
        }
        sort(s.begin(), s.end());
        int median = 0;
        if(r % 2 == 1){
            median = s[r / 2];
        }else{
            median = (s[r/2 - 1] + s[r/2]) / 2;
        }
        int sum = 0;
        for(int i = 0; i < r; i++){
            sum += abs(s[i] - median);
        }
        cout << sum << "\n";
    }
    return 0;
}