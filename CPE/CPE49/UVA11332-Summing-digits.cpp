#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long num = 0;
    while(cin >> num && num){
        long long sum = 0;
        while(num > 0){
            sum += (num % 10);
            num /= 10;
            if(num == 0 && sum >= 10){ 
                num = sum;
                sum = 0;
            }
        }
        cout << sum << "\n";
    }
    return 0;
}