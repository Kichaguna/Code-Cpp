#include <bits/stdc++.h>
using namespace std;

int main(){
    int tpr,h,him,r,start = 80,sum = 0,lvl,coin;
    cout << "Input Hour You Want To Grind : ";
    cin >> h;
    cout << "Input Minute Per Round : ";
    cin >> tpr;
    cout << "Input Start LVL : ";
    cin >> lvl;

    for(int i = 1; i< lvl; i++){
        start += 13;
    }

    cout << "Start Gems LVL : "<< start << "\n";

    him = h * 60;
    r = him / tpr;
    sum = start;
    for(int i = 0; i<r; i++){
        sum = sum + start + 13;
        start += 13;
    }
    coin = r * 100;
    cout << "You Have Play For : " << r << " Rounds\n";
    cout << "Get Gems : "<<sum << "\n" << "Get Coins : " << coin;
}
