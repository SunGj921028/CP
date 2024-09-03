#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 0;
    cin >> t;
    while(t--){
        vector<int> rel;
        int num = 0;
        cin >> num;
        int temp = 0;
        int dis = 0;
        while(num--){
            cin >> temp;
            rel.push_back(temp);
        }
        sort(rel.begin(), rel.end());
        for(int i = 0; i < rel.size();i++){ 
            dis += abs(rel[i] - rel[rel.size() / 2]);
        }
        cout << dis << endl;
    }
}