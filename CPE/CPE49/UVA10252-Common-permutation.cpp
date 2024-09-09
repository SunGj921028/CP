#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str1 = "";
    string str2 = "";
    while(cin >> str1 >> str2){
        map<char, int> mp;
        map<char, int> mp2;
        for(auto c : str1){
            mp[c]++;
        }
        for(auto c : str2){
            mp2[c]++;
        }
        for(auto c : mp){
            if(c.second >= 1 && mp2[c.first] >= 1){
                while(c.second-- && mp2[c.first]--){
                    cout << c.first;
                }
            }
        }
        cout << "\n";
    }
    return 0;
}

//! Correct answer 
// string a, b;
// int cnta[26], cntb[26];
 
// int main() {
//     while (cin >> a >> b){
//         for (int i = 0; i < 26; i++){
//             cnta[i] = 0;
//             cntb[i] = 0;
//         }
//         for (int i = 0; i < a.length(); i++){
//             cnta[a[i]-'a']++;
//         }
//         for (int i = 0; i < b.length(); i++){
//             cntb[b[i]-'a']++;
//         }
//         for (int i = 0; i < 26; i++){
//             for (int j = min(cnta[i], cntb[i]); j > 0; j--){
//                 cout << (char)('a'+i);
//             }
//         }
//         cout << "\n";
//     }
// }