#include <bits/stdc++.h>
using namespace std;

int main(){
    int tpr,h,him,r,sum;
    cout << "Input Hour You Want To Grind : ";
    cin >> h;
    him = h * 60;
    cout << "Input Minute Per Round : ";
    cin >> tpr;
    r = him / tpr;
    sum = 464 * r;
    cout << "Get Gems : "<< sum;
}

