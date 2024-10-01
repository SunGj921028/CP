#include<bits/stdc++.h>

using namespace std;

// int count;

int recursiveNine(string n, int count){
    int sum = 0;
    for(auto c : n){
        sum += (c - '0');
    }
    count++;
    if(sum == 9){ return count;}
    else if(sum < 9){ return 0;}
    else{ return recursiveNine(to_string(sum), count);}
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    while(cin >> s && s != "0"){
        int ans = 0;
        ans = recursiveNine(s, 0);
        if(ans == 0){ cout << s << " is not a multiple of 9.\n";}
        else{ cout << s << " is a multiple of 9 and has 9-degree " << ans << ".\n";}
    }

    return 0;
}