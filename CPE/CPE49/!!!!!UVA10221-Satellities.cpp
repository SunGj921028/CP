#include<bits/stdc++.h>

using namespace std;

//! Degrees (°), minutes (‘), seconds (“) -> 1° = 60′, 1′ = 60″
//! 角度 degree (deg) vs. 弧度 radius (rad) -> 一個完整的圓的弧度：2 * PI, rad = deg / 180 * PI
//? cos (90°) = 0 -> acos(0) = PI / 2 -> PI = 2 * acos(0)
//* 一個半徑為 R 的圓，圓周長為 2 * PI * R，當兩顆衛星之間的夾角「角度」為 a°（a 大於 180 時，a -> 360 – a）
//* 弧長 arc = 2 * PI * R * a / 360, 弦長 chord = 2 * R * cos((90 – a / 2) / 180 * PI)


#define PI acos(0.0) * 2.0

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int s = 0, a = 0;
    string unit;
    double r = 6440.0;
    while(cin >> s >> a >> unit){
        double arc = 0.0, chord = 0.0;
        if(unit == "min"){ a /= 60.0;} //! switch to degrees(°)
        if(a > 180.0){ a = 360.0 - a;}
        arc = 2 * M_PI * (r + s) * a / 360.0;
        chord = 2 * (r + s) * cos((90.0 - a / 2.0) / 180.0 * M_PI);
        cout << fixed << setprecision(6) << arc << " " << chord << "\n";
    }

    return 0;
}