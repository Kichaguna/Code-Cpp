#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[4];
    int t = 0 , ch = 0;
    for(int i = 0 ; i < 4; i++){
        cin >> a[i];
    }
    int n[4] = {0 , 0, 0 ,0};
    for(int i = 0 ; i < 4; i++){
        if(t <= 2){
            for(int j = 0; j <= t; j++){
                if(n[j] == a[i]){
                    ch = 1;
                    break;
                }
            }
            if(ch == 0){
                n[t] = a[i];
                t++;
            }
            ch = 0;
        }
        else{
            cout << "No";
            return 0;
        }
    }
    if(t == 2){
    cout << "Yes";
    }
    else{
        cout << "No";
    }
}
