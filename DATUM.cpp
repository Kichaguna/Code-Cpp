#include <bits/stdc++.h>

using namespace std;


int main(){

    int m , d, r;
    cin >> d>> m;
    for(int i = 1;i <= m-1; i++){
        if(i == 1){
            d += 31;
        }

        if(i == 2){
            d += 28;
        }
        if(i == 3){
            d += 31;
        }
        if(i == 4){
            d += 30;
        }
        if(i == 5){
            d += 31;
        }
        if(i == 6){
            d += 30;
        }
        if(i == 7){
            d += 31;
        }
        if(i == 8){
            d += 31;
        }
        if(i == 9){
            d += 30;
        }
        if(i == 10){
            d += 31;
        }
        if(i == 11){
            d += 30;
        }
        if(i == 12){
            d += 31;
        }
    }
    r = d % 7;
    r = r-1;
    if(r == 0){
        cout << "Thursday";
    }
    if(r == 1){
        cout <<  "Friday";
    }
    if(r == 2){
        cout << "Saturday";
    }
    if(r == 3){
        cout << "Sunday";
    }
    if(r == 4){
        cout << "Monday";
    }
    if(r == 5){
        cout << "Tuesday";
    }
    if(r == 6){
        cout << "Wednesday";
    }
}
