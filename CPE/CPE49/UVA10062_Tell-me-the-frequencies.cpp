#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    while(cin >> s){
        map<int, int> mp;
        vector<pair<int, int>> vec;
        for(auto c : s){
            mp[c]++;
        }
        for(auto m : mp){
            vec.push_back({m.second, m.first});
        }
        sort(vec.begin(), vec.end());
        for(auto v : vec){
            cout << v.second << " " << v.first << endl;
        }
        cout << endl;
    }

    return 0;
}