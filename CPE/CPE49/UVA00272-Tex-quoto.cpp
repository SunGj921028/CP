#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str = "";
    int count = 0;

    while(getline(cin, str)){
        for(auto c : str){
            if(c == '\"'){
                if(count % 2 == 0){ cout << "``";}
                else{ cout << "''";}
                count++;
            }else{
                cout << c;
            }
        }
        cout << "\n";
    }
    return 0;
}