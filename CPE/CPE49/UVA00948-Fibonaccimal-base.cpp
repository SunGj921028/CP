#include<bits/stdc++.h>

using namespace std;

int main(){
    vector <int> fib;
    int f0 = 0, f1 = 1, f2 = 1;
    for (; f2 <= 1e8; ){
        f2 = f0 + f1;
        fib.push_back(f2);
        f0 = f1;
        f1 = f2;
    }
    reverse(fib.begin(), fib.end());
    int n = 0;
    cin >> n;
    while(n--){
        int num = 0, x = 0;
        cin >> num;
        x = num;
        // To find the biggest FIB number that smaller than num
        cout << num << " = ";
        vector<int> ans;
        int i = 0;
        while(fib[i] > x){ i++;}
        for(; i < fib.size();i++){
            if(fib[i] <= x){
                x -= fib[i];
                ans.push_back(1);
                // 跳過下一個因為不能連續
                i++;
                if(i < fib.size()){ ans.push_back(0);}
            }else{ ans.push_back(0);}
        }
        for(auto j : ans){
            cout << j;
        }
        cout << " (fib)\n";
    }
    return 0;
}