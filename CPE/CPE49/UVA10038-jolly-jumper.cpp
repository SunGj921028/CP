#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n = 0;
    while(cin >> n){
        set<int> seq;
        int prev = 0;
        for(int i = 0; i < n; i++){
            int num = 0;
            cin >> num;
            if(i > 0){
                seq.insert(abs(num - prev));
            }
            prev = num;
        }
        bool isJolly = true;
        for(int i = 1; i < n; i++){
            if(seq.find(i) == seq.end()){
                isJolly = false;
                break;
            }
        }
        if(isJolly){ cout << "Jolly\n";}
        else{ cout << "Not jolly\n";}
    }
    return 0;
}