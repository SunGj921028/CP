#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 0;
    cin >> t;
    for(int x = 0;x < t;x++){
        int up = 0, down = 0;
        cin >> down >> up;
        int sum = 0;
        for(int i = down; i <= up;i++){
            if(i % 2 == 1){
                sum += i;
            }
        }
        cout << "Case " << x + 1 << ": " << sum << "\n";
    }

    return 0;
}