#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,t,t1,wh,temp,m,coun =1;
    cin >> n >> t;
    if(t != 1){
        t1 = t-1;
    }
    else{
        t1 = t;
    }
    temp = ((n-(t-1)) / t)+1;
    if(temp % 2 == 0){
        wh = 1;
    }
    else{
        wh = 0;
    }
    m = wh;
    //1 = R
    //0 = -
    temp--;
    for(int i = 0; i < n; i++){
        if( i < t1){
            for(int j =0 ; j< n; j++){
                if(wh == 1){
                    cout << "R ";
                }
                else{
                    cout << "- ";
                }
            }
            cout << "\n";
        }
        if(i >= t1){
            for(int j =0 ; j< t1; j++){
                if(wh == 1){
                    cout << "R ";
                }
                else{
                    cout << "- ";
                }
            }
            if(wh == 1){
                wh = 0;
            }
            else{
                wh = 1;
            }
            for(int j =0; j< n;j++){
                for(int k = 0; k < t; k++){

                }
            }
            cout << "\n";
            wh = m;
        }
    }
}
