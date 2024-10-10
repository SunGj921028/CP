#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    double h = 0.0, u = 0.0, d = 0.0, f = 0.0;
    while(cin >> h >> u >> d >> f){
        if(!h && !u && !d && !f){ return 0;}
        double des = u * (f / 100.0);
        int day = 1;
        double dis = 0.0;
        while(day){
            dis += u;
            if(dis > h){
                cout << "success on day " << day << "\n";
                break;
            }
            dis -= d;
            if(dis < 0){
                cout << "failure on day " << day << "\n";
                break;
            }
            u -= des;
            if(u <= 0){ u = 0;}
            day++;
        }
    }
    return 0;
}