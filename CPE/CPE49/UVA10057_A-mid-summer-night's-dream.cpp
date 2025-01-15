#include<bits/stdc++.h>

using namespace std;

//! A 可能的數量為，當 n 為奇數時，有兩個中位數，當 n 為偶數時，有一個中位數
//! 所以，n 為奇數時兩中位數中間的所有數皆符合，包含兩中位數

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n = 0;
    while(cin >> n){
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int mid1 = v[(n - 1) / 2];
        int mid2 = v[n / 2];
        int ans = 0;
        for(int i = 0; i < n ; i++){
            if(v[i] == mid1 || v[i] == mid2){ ans++;}
        }
        cout << mid1 << " " << ans << " " << mid2 - mid1 + 1 << endl;
    }

    return 0;
}