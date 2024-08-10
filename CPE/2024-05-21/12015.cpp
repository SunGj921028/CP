#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t = 0;
    cin >> t;
    for(int j = 0; j < t; j++){
        vector<string> url;
        int p = 0;
        int cnt = 1;
        int relevence = 0;
        int max = 0;
        string str;
        for(int i = 0; i < 10 ; i++){
            cin >> str;
            cin >> relevence;
            url.push_back(str);
            if(relevence > max){
                max = relevence;
                cnt = 1;
                p = url.size() - 1;
            }else if(relevence == max){
                cnt++;
            }else{
                url.pop_back();
            }
        }
        cout << "Case #" << j + 1 << ":\n";
        for(int k = 0; k < cnt; k++){
            cout << url[p + k] << endl;
        }
        cout << endl;
    }
    return 0;
}