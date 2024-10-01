#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 0;
    cin >> t;
    while(t--){
        int n = 0, p = 0;
        cin >> n >> p;
        vector<int > hi(p);
        for(int i = 0; i < p; i++){
            cin >> hi[i];
        }
        unordered_map<int, int> mp(0);
        int day = 0;
        for(auto h : hi){
            int temp = h;
            while(temp <= n){
                if(temp % 7 != 6 && temp % 7 != 0 && mp[temp] != 1){ day++;}
                mp[temp] = 1;
                temp += h;
            }
        }
        cout << day << "\n";
    }

    return 0;
}