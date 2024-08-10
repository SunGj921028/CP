#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a0 = 0;
    while(cin >> a0 && a0 != 0){
        int count = 0;
        bool check[10001] = {false};
        while(!check[a0]){
            count++;
            check[a0] = true;
            a0 *= a0;
            a0 /= 100;
            a0 %= 10000;
        }
        cout << count << endl;
    }
    return 0;
}