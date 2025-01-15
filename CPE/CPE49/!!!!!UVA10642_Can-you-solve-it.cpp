#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int Case = 0;
    cin >> Case;
    //! step1 -> (0, 0) to source
    //! step2 -> (0, 0) to destination
    long long x, y, n, step1, step2;
    for(int i = 1; i <= Case; i++){
        cout << "Case " << i << ": ";
        cin >> x >> y;
        if (x == 0 && y == 0) { step1 = 0;}
        else{
            n = x + y - 1;
            step1 = (n * n + 3 * n) / 2 + (x + 1);
        }
        cin >> x >> y;
        n = x + y - 1;
        if (x == 0 && y == 0){ step2 = 0;}
        else{
            step2 = (n * n + 3 * n) / 2 + (x + 1);
        }
        cout << step2 - step1 << endl;
    }

    return 0;
}