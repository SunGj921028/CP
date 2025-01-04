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
// int main()
// {
//     // 定義每個月的天數
//     int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

//     // 定義星期的名稱
//     string daysOfWeek[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

//     int n;
//     cin >> n;
//     while (n--)
//     {

//         int month, day;
//         while (cin >> month >> day)
//         {
//             // 計算從1月1日到當前日期的總天數
//             int totalDays = day - 1; // 當前月內的天數
//             for (int i = 0; i < month - 1; i++)
//             {
//                 totalDays += daysInMonth[i]; // 加上之前每個月的天數
//             }

//             // 1月1日是星期六，所以可以直接用 totalDays 取模 7 得到星期幾
//             cout << daysOfWeek[totalDays % 7] << endl;
//         }
//     }
//     return 0;
// }
