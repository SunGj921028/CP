#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 0;
    cin >> t;
    string enter;
    getline(cin, enter);
    for(int i = 1; i <= t; i++){
        char n;
        int N = 0;
        cin >> n >> n >> N;
        vector<long long > num(N * N, 0);
        bool check = true;
        for(int j = 0; j < N*N ;j++){
            cin >> num[j];
            if(num[j] < 0){ check = false;}
        }
        cout << "Test #" << i << ": ";
        if(!check){ cout << "Non-symmetric.\n"; continue;}
        // Judge
        for(int k = 0; k < N*N / 2; k++){
            if(num[k] != num[N*N - 1 - k]){ 
                cout << "Non-symmetric.\n"; check = false; 
                break;
            }
        }
        if(check){ cout << "Symmetric.\n";}
    }

    return 0;
}