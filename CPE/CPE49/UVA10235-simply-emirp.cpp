#include<bits/stdc++.h>

using namespace std;

bool prime(int num){
    for(int i = 2; i < num; i++){
        if(num != i && num % i == 0){ return false;}
    }
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int num = 0;
    while(cin >> num){
        if(num == 1 || num == 0){ cout << num << " is not prime.\n"; continue;}
        int numCopy = num;
        string numReverseStr = to_string(numCopy);
        int numReverse = 0;
        int count = 0;
        for(int i = 0; i < numReverseStr.size(); i++){
            numReverse += (numReverseStr[i] - '0') * pow(10, count++);
        }
        int Prime = prime(num);
        if(!Prime){ cout << num << " is not prime.\n";}
        else{
            if(num == numReverse){ cout << num << " is prime.\n"; continue;}
            int emirp = prime(numReverse);
            if(!emirp){ cout << num << " is prime.\n";}
            else{ cout << num << " is emirp.\n";}
        }
    }
    return 0;
}