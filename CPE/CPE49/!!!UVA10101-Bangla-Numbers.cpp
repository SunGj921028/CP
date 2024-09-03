#include<bits/stdc++.h>

using namespace std;

int a[] = {10000000, 100000, 1000, 100};
string b[] = {"kuti", "lakh", "hajar", "shata"};
string res = "";

string num2str(long long num){
    string s = "";
    while(num){
        s += (num % 10) + '0';
        num /= 10;
    }
    reverse(s.begin(), s.end());
    return s;
}

void solve(long long num){
    if(num >= a[0]){
        solve(num / a[0]);
        res += " " + b[0];
        num %= (int)a[0];
    }
    for(int i = 0; i < 4; i++){
        if(num / a[i] > 0){
            res += " " + num2str(num / a[i]) + " " + b[i];
            num %= a[i];
        }
    }
    if(num > 0){ res += " " + num2str(num);}
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long num = 0;
    int Case = 1;
    while(cin >> num){
        cout << "   " << Case++ << ".";
        if(num == 0){ cout << " 0\n";}
        else{
            res = "";
            solve(num);
            cout << res << "\n";
        }
    }
    return 0;
}