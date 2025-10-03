//*https://programming.in.th/tasks/0023
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int d , m,sum = 0;
    int month[12] = {0,31,28,31,30,31,30,31,31,30,31,30};
    string day[7] = {"Wednesday","Thursday","Friday","Saturday","Sunday","Monday", "Tuesday"};
    cin >> d >> m;
    for(int i = 0; i < m; i++){
        sum+=month[i];
    }
    sum+=d;
    cout << day[sum%7];
}