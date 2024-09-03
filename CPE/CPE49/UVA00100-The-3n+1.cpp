#include<bits/stdc++.h>

using namespace std;

int maxCycle(int i){
    int count = 1; // For 1
    while(i != 1){
        if(i % 2 == 0){ i /= 2;}
        else{ i = i * 3 + 1;}
        count++;
    }
    return count;
}

int main(){
    int i = 0, j = 0;
    while(cin >> i >> j){
        int res = 0;
        for(int s = min(i, j); s <= max(i, j) ; ++s){
            res = max(res, maxCycle(s));
        }
        cout << i << " " << j << " " << res << "\n";
    }
}