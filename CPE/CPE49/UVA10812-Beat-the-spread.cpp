#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n = 0;
    cin >> n;
    while(n--){
        int sum = 0, diff = 0;
        cin >> sum >> diff;
        if(sum < diff || (sum + diff) % 2){ cout << "impossible\n";}
        else { cout << (sum + diff) / 2 << " " << (sum - diff) / 2 << "\n";}
    }

    return 0;
}