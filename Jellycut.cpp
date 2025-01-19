#include <bits/stdc++.h>
using namespace std;

int main(){
    int num[3],coun=0,s=1;
    cin >> num[0] >> num[1] >> num[2];
    while(num[0]!=1||num[1]!=1||num[2]!=1){
        if(num[0]!=1){
            num[0] /= 2;
            coun++;
        }
        if(num[1]!=1){
            num[1] /= 2;
            coun++;
        }
        if(num[2]!=1){
            num[2] /= 2;
            coun++;
        }
    }
    if(coun % 2 == 0){
        s = 2;
    }
    cout << coun << " times = = >> Start : " << s;
}
