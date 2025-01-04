#include<bits/stdc++.h>

using namespace std;

//! Input is A BIG PROBLEM !!!!!!! 

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x = 0;
    while(cin >> x){
        vector<int > poly;
        int num = 0;
        string s;
        getline(cin, s); // For the Enter of (cin >> x)
        getline(cin, s);
        stringstream ss(s);
        while(ss >> s){
            poly.push_back(stoi(s));
        }
        long long value = 0;
        int n = poly.size() - 1;
        int ex = n;
        for(int i = 0 ;i < n && ex > 0; i++, ex--){
            value += poly[i] * ex * (pow(x, ex - 1));
        }
        cout << value << "\n";
    }
    return 0;
}

// Example answer
// string s;
// int x;
// vector <int> v;
 
// int main() {
//     while (cin >> x){
//         getline(cin, s);
//         getline(cin, s);
//         //cout << "s: " << s << "\n";
//         stringstream ss(s);
//         v.clear();
//         while (ss >> s){
//             v.push_back(stoi(s));
//         }
//         v.pop_back();
//         reverse(v.begin(), v.end());
//         long long mul = 1;
//         int ans = 0;
//         for (int i = 0; i < v.size(); i++){
//             //cout << "i: " << i << " " << v[i] << " " << ans << " " << mul << "\n";
//             ans += v[i]*(i+1)*mul;
//             mul *= x;
//         }
//         cout << ans << "\n";
//     }
// }