#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , d , temp;
    cin >> n >> d;
    int t[n][2];
    for(int i = 0; i < n; i++){
        cin >> t[i][0] >> t[i][1];
    }
    int l[d];
    for(int i = 0; i < d; i++){
        l[i] = 0;
    }
    for(int i = 1; i <= d; i++){
        for(int j = 0; j < n; j++){
            temp = t[j][0] * (t[j][1] + i);
            if(temp > l[i-1]){
                l[i-1] = temp;
            }
        }
    }
    for(int i = 0; i < d; i++){
        cout << l[i] << endl;
    }
}
