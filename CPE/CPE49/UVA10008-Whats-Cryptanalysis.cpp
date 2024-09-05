#include<bits/stdc++.h>

using namespace std;

bool compareFun(pair<char, int> a, pair<char, int> b){
    if(a.second == b.second){
        return a.first < b.first;
    }
    return a.second > b.second;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n = 0;
    cin >> n;
    string s = "";
    getline(cin, s);
    map<char, int> mp;
    while(n--){
        getline(cin, s);
        for(auto c : s){
            if((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A')){
                mp[toupper(c)]++;
            }
        }
    }
    vector<pair<char, int>> arr(mp.begin(), mp.end());
    sort(arr.begin(), arr.end(), compareFun);
    for(auto i : arr){
        cout << i.first << " " << i.second << "\n";
    }
}