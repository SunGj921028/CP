#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int i = 0;
    while(cin >> i && i != 0){
        int cnt = 0;
        vector<string> binary;
        while(i > 0){
            int remainder = i % 2;
            if(remainder == 1){ cnt++;}
            binary.push_back(to_string(remainder));
            i /= 2;
        }
        reverse(binary.begin(), binary.end());
        cout << "The parity of ";
        for(auto s : binary){
            cout << s;
        }
        cout << " is " << cnt << " (mod 2).\n";
    }
    return 0;
}