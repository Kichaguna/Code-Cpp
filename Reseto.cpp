#include <bits/stdc++.h>
using namespace std;

int main(){
    int a ,b,coun = 0,n = 0,sum1,sum2 = 0,sum3;
    cin >> a >> b;
    int prime[a];
    for(int i = 0; i < a; i++){
        prime[i] = -1;
    }
    for(int i = 2; i <= a; i++){
        for(int j = 2; j <= i; j++){
            if(i % j == 0){
                coun++;
            }
        }
        if(coun == 1){
            prime[n] = i;
            n++;
        }
        coun = 0;
    }
    int fac[n];
    for(int i = 0 ;i < n; i++){
        fac[i] = prime[i];
    }
    for(int i = 0; i < n; i++){
        sum1 = a / fac[i];
        sum2 = sum2 + sum1;
    }
    int num[sum2];
    for(int i = 0; i< sum2; i++){
        num[i] = -1;
    }
    for(int i = 0; i< n ; i++){
        sum1 = a / fac[i];
        for(int j = 1; j <= sum1; j++){
            sum3 = fac[i] * j;
            for(int k = 0; k < sum2; k++){
                if(num[k] == sum3){
                    break;
                }
                else if(num[k] == -1){
                    num[k] = sum3;
                    break;
                }
            }
        }
    }
    cout << num[b-1];
}
