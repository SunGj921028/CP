#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n = 0;
    cin >> n;
    map<string, int> mp;
    string s = "";
    getline(cin, s); // 清空資料緩衝區
    while(n--){
        getline(cin, s);
        mp[s.substr(0, s.find(" "))]++;
    }
    for(auto i : mp){
        cout << i.first << " " << i.second << "\n";
    }
    return 0;
}