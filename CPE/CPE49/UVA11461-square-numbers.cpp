#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a = 0, b = 0;
    while(cin >> a >> b){
        if(a == 0 && b == 0){ return 0;}
        int count = 0;
        for(int i = a; i <= b; i++){
            double root = sqrt(i);
            if(root == (int)root){ count++;}
        }
        cout << count << "\n";
    }

    return 0;
}