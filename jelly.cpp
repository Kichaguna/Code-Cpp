#include <bits/stdc++.h>
using namespace std;

int main(){
    int a , b ,c ,temp,coun = 0;
    cin >> a >> b >>c;
    temp = a;
    while(temp != 1){
        temp = temp / 2;
        coun++;
    }
    temp = b;
    while(temp != 1){
        temp = temp / 2;
        coun++;
    }
    temp = c;
    while(temp != 1){
        temp = temp / 2;
        coun++;
    }
    cout << coun;
}
