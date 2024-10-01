#include<bits/stdc++.h>

using namespace std;

//! mx[i][j]：以 (i, j) 為右下角的最大正方形邊長

// int main(){
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);

//     int t = 0;
//     cin >> t;
//     while(t--){
//         int m = 0, n = 0, q = 0;
//         cin >> m >> n >> q;
//         int mx[105][105];
//         int grid[105][105];
//         for(int i = 0 ;i < m; i++){
//             for(int j = 0; j < n; j++){
//                 char c;
//                 cin >> c;
//                 grid[i][j] = (int)c;

//                 if(i == 0 || j == 0){ mx[i][j] = 1;}
//                 else if(grid[i][j] == grid[i - 1][j] && grid[i][j] == grid[i][j - 1] && grid[i][j] == grid[i - 1][j - 1]){
//                     mx[i][j] = min({mx[i - 1][j], mx[i - 1][j - 1], mx[i][j - 1]}) + 1;
//                 }else{ 
//                     mx[i][j] = 1;
//                 }
//             }
//         }
//         cout << m << " " << n << " " << q << "\n";
//         while(q--){
//             int len = 1;
//             int x = 0, y = 0;
//             cin >> x >> y;
//             for(int i = 1; i <= 100; i++){
//                 if(x + i > m || y + i > n){ break;}
//                 if(mx[x + i][y + i] >= (len + 2)){ len += 2;}
//                 else{ break;}
//             }
//             cout << len << "\n";
//         }
//     }

//     return 0;
// }

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int T;
    cin>>T;
    while(T--)
    {
        int R,C,Q;
        cin>>R>>C>>Q;
        cout<<R<<" "<<C<<" "<<Q<<"\n";

        string table[150];
        for(int i=0;i<R;i++) {
            cin>>table[i]; }

        while(Q--)
        {
            int r,c,n=0,width=1;
            bool flag=true;
            cin>>r>>c;
            while(flag)
            {
                n++;
                for(int i=r-n;i<=r+n&&flag==true;i++)
                {   
                    for(int j=c-n;j<=c+n&&flag==true;j++)
                    {
                        if(i<0||j<0||i>=R||j>=C) flag=false; //邊界限制
                        else if(table[i][j]!=table[r][c]) flag=false; //當條件式if不成立，再來判斷else if是否成立
                    }
                }
                if(flag==true) width+=2;
            }
            cout<<width<<"\n";
        }
    }
    return 0;
}