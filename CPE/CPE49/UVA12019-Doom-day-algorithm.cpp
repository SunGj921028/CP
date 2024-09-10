#include<bits/stdc++.h>

using namespace std;

string weekDay[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
int match[13] = {
    -1, 10, 21, 7, 4, 9, 6,
    11, 8, 5, 10, 7, 12, 
};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 0;
    cin >> t;
    int m = 0, d = 0;
    while(t--){
        cin >> m >> d;
        int numDay = 0;
        if(m == 3){
            numDay = (d + 7) % 7;
            cout << weekDay[numDay];
        }else{
            numDay = (d - match[m]) % 7;
            if(numDay >= 0){ cout << weekDay[numDay];}
            else{ cout << weekDay[7 + numDay];}
        }
        cout << "\n";
    }
    return 0;
}

// Correct answer
