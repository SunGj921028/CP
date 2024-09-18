#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int Case = 0;
    cin >> Case;
    for(int i = 1; i <= Case;i++){
        if(i > 1){ cout << "\n";}
        cout << "Case " << i << ":\n";
        // Input the 36 cost
        map<int, int> mp;
        for(int c = 0; c < 36; c++){
            int cost = 0;
            cin >> cost;
            mp[c] = cost;
        }

        // For Query
        int q = 0;
        cin >> q;
        while(q--){
            int n = 0;
            cin >> n;
            cout << "Cheapest base(s) for number " << n << ":";
            int MIN = 0x7FFFFFFF;
            map<int, int> ans;
            // Check 2 to 36 base
            for(int j = 2; j <= 36; j++){
                int temp = n;
                int tmpCost = 0;
                while(temp > 0){
                    tmpCost += mp[temp % j];
                    temp /= j;
                }
                ans[j] = tmpCost;
                MIN = min(MIN, tmpCost);
            }

            // Print the ans
            for(int j = 2; j <= 36; j++){
                if(ans[j] == MIN){ cout << " " << j;} // Print the base
            }
            cout << "\n";
        }
    }
    return 0;
}