#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ,ans = 0;
    cin >> n;
    if(n % 2 == 0){
        for(int i = 1; i <= n /2; i++){
            ans += i;
        }
        cout << ans * 2;
    }
    else{

    }
}
