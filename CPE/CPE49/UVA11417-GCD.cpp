#include<bits/stdc++.h>

using namespace std;

int GCD(int a, int b){
    if(b == 0){ return a;}
    return GCD(b, a % b);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n = 0;
    while(cin >> n && n != 0){
        int G = 0;
        for(int i = 1; i < n; i++){
            for(int j = i + 1; j <= n; j++){
                G += GCD(i, j);
            }
        }
        cout << G << "\n";
    }
    return 0;
}