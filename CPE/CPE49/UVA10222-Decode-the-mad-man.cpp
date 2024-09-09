#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s[] = {
        "~!@#$%^&*()_+",
        "`1234567890-=",
        "qwertyuiop[]\\",
        "asdfghjkl;'",
        "zxcvbnm,./"};

    map<char, char> mp;
    // Create the match map
    for(int i = 0; i < 5; i++){
        for(int j = 2; j < s[i].size(); j++){
            mp[s[i][j]] = s[i][j - 2];
        }
    }
    string str;
    while(getline(cin, str)){
        for(auto c : str){
            if(c == ' '){ cout << " ";}
            else{ cout << mp[tolower(c)];}
        }
        cout << "\n";
    }
    return 0;
}