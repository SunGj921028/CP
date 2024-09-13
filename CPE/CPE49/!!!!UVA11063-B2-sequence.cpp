#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 0;
    int c = 1;
    while(cin >> t){
        cout << "Case #" << c++ << ": ";
        vector<int > seq(t, 0);
        bool check = true;
        for(int i = 0;i < t; i++){
            cin >> seq[i];
            if(i != 0 && seq[i] < seq[i - 1]){ check = false;}
        }
        set<int> st;
        for(int i = 0; i < t;i++){
            for(int j = i; j < t; j++){
                int temp = seq[i] + seq[j];
                if(st.count(temp) || seq[i] < 1 || seq[j] < 1){
                    check = false;
                    break;
                }
                st.insert(temp);
            }
            if(!check){ break;}
        }
        if(check){ cout << "It is a B2-Sequence.\n\n";}
        else{ cout << "It is not a B2-Sequence.\n\n";}
    }

    return 0;
}