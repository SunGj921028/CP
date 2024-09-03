#include<bits/stdc++.h>

using namespace std;

int main(){
    string input = "";
    while(cin >> input){
        if(input == "0"){ return 0;}
        int odd = 0, even = 0;
        int minus = 0;
        for(int i = 0; i < input.size();i++){
            if(i % 2 == 0){
                even += input[i] - '0';
            }else{
                odd += input[i] - '0';
            }
        }
        minus = even - odd;
        if(minus % 11 == 0){ cout << input << " is a multiple of 11.\n";}
        else { cout << input << " is not a multiple of 11.\n";}
    }
    return 0;
}