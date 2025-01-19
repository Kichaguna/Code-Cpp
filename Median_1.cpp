#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    double ans;
    cin >> n;
    double num[n];
    for(int i = 0; i<n; i++){
        cin >> num[i];
    }
    sort(num , num+n);

    if(n % 2 == 0){
        ans = num[(n/2)-1] + num[n/2];
        ans /= 2;
    }
    else if(n % 2 == 1){
        ans = num[n/2];
    }
    printf("%.2lf",ans);
}
