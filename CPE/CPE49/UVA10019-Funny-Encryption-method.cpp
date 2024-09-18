#include<bits/stdc++.h>

using namespace std;

int cntOneInBinary(int n){
    int cnt = 0;
    while(n > 0){
        int remainder = n % 2;
        if(remainder == 1){ cnt++;}
        n = n / 2;
    }
    return cnt;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 0;
    cin >> t;
    while(t--){
        int n = 0;
        cin >> n;
        string temp = to_string(n);
        // For b1: decimal to binary
        int b1 = 0, b2 = 0;
        b1 = cntOneInBinary(n);

        // For b2: hexdeciaml to binary
        for(auto c : temp){
            int num = 0;
            if(c >= 'A' && c <= 'Z'){
                num = c - 'A' + 10;
            }else{
                num = c - '0';
            }
            b2 += cntOneInBinary(num);
        }
        cout << b1 << " " << b2 << "\n";
    }
    return 0;
}