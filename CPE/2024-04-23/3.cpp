#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int l = 0, n = 0;
    cin >> l >> n;
    string s;
    vector<string> pl;
    while(l--){
        string temp;
        cin >> temp;
        pl.push_back(temp);
        cin >> temp;
        pl.push_back(temp);
    }
    
    while(n--){
        string str;
        cin >> str;
        // Judge if in pl
        int flag = -1;
        for(int i = 0; i < pl.size(); i++){
            if(pl[i] == str){ flag = i;break;}
        }
        if(flag != -1){
            cout << pl[flag + 1] << "\n";
        }else{
            if(str[str.size() - 1] == 'y' && (str[str.size() - 2] != 'a' && str[str.size() - 2] != 'e' && str[str.size() - 2] != 'i' && str[str.size() - 2] != 'o' && str[str.size() - 2] != 'u')){ 
                str[str.size() - 1] = 'i';
                cout << str << "es\n"; 
            }else if(str[str.size() - 1] == 'o' || str[str.size() - 1] == 's' || str[str.size() - 1] == 'x' || (str[str.size() - 1] == 'h' && str[str.size() - 2] == 'c') || (str[str.size() - 1] == 'h' && str[str.size() - 2] == 's')){
                cout << str << "es\n";
            }else{ cout << str << "s\n";}
        }
    }
    return 0;
}