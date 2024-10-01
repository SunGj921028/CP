#include<bits/stdc++.h>

using namespace std;

int getNumInBinary(string s){
    int num = 0;
    int count = 0;
    for(int i = s.size() - 1;i >= 0; i--){
        num += (s[i] - '0') * pow(2, (count++));
    }
    return num;
}

int GCD(int a, int b){
    if(b == 0){ return a;}
    return GCD(b, a % b);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int p = 0;
    cin >> p;
    string s;
    getline(cin, s); // Enter
    for(int i = 1;i <= p;i++){
        cout << "Pair #" << i << ": ";
        vector<string > input(2);
        cin >> input[0];
        int num1 = getNumInBinary(input[0]);
        cin >> input[1];
        int num2 = getNumInBinary(input[1]);
        int gcd = GCD(num1, num2);
        if(gcd > 1){ cout << "All you need is love!\n";}
        else{ cout << "Love is not all you need!\n";}
    }
    return 0;
}