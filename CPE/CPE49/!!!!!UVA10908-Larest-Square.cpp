#include<bits/stdc++.h>

using namespace std;

//! mx[i][j]：以 (i, j) 為右下角的最大正方形邊長

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 0;
    cin >> t;
    while(t--){
        int m = 0, n = 0, q = 0;
        cin >> m >> n >> q;
        int mx[105][105];
        int grid[105][105];
        for(int i = 0 ;i < m; i++){
            for(int j = 0; j < n; j++){
                char c;
                cin >> c;
                grid[i][j] = (int)c;

                if(i == 0 || j == 0){ mx[i][j] = 1;}
                else if(grid[i][j] == grid[i - 1][j] && grid[i][j] == grid[i][j - 1] && grid[i][j] == grid[i - 1][j - 1]){
                    mx[i][j] = min({mx[i - 1][j], mx[i - 1][j - 1], mx[i][j - 1]}) + 1;
                }else{ 
                    mx[i][j] = 1;
                }
            }
        }
        cout << m << " " << n << " " << q << "\n";
        while(q--){
            int len = 1;
            int x = 0, y = 0;
            cin >> x >> y;
            for(int i = 1; i <= 100; i++){
                if(x + i > m || y + i > n){ break;}
                if(mx[x + i][y + i] >= (len + 2)){ len += 2;}
                else{ break;}
            }
            cout << len << "\n";
        }
    }

    return 0;
}