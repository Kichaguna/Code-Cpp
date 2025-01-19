#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    double ans;
    cin >> n;
    double num[n];
    double num2[n];
    double sum[2*n];
    for(int i = 0; i<n; i++){
        cin >> num[i];
    }
    for(int i = 0; i<n; i++){
        cin >> num2[i];
    }
    for(int i = 0; i<n; i++){
        sum[i] = num[i];
    }
    for(int i = 0; i<n; i++){
        sum[n + i] = num2[i];
    }
    sort(sum , sum+(2*n));
    ans = sum[n-1] + sum[n];
    ans = ans/2;

    printf("%.2lf",ans);
}
