#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str[105];
    int col = 0, row = 0;
    // Get the input
    while(getline(cin, str[col])){
        row = max(row, (int)str[col].size());
        col++;
    }

    // Print the output
    for(int i = 0; i < row;i++){
        for(int j = col - 1; j >= 0; j--){
            if(i >= str[j].size()){ cout << " ";}
            else{ cout << str[j][i];}
        }
        cout << "\n";
    }
    return 0;
}