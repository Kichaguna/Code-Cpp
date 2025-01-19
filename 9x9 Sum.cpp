#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , sum = 2025;
    cin >> n;
    for(int i = 1; i <= 9;i++){
        for(int j = 1; j <= 9; j++){
            if(i * j == n){
                sum -= n;
            }
        }
    }
    cout << sum;
}
