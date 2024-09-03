#include<bits/stdc++.h>

using namespace std;

int main(){
    int a = 0, b = 0;
    while(cin >> a >> b){
        int ope = 0;
        int carry = 0;
        if(a == 0 && b == 0){ return 0;}
        while(a > 0 || b > 0){
            int sum = (a % 10) + (b % 10) + carry;
            if(sum >= 10){ carry = (sum / 10), ope++;}
            else { carry = 0;}
            a /= 10;
            b /= 10;
        }
        if(ope != 0){
            if(ope == 1){ cout << ope << " carry operation.\n";}
            else{ cout << ope << " carry operations.\n";}
        }else {
            cout << "No carry operation.\n";
        }
    }
    return 0;
}