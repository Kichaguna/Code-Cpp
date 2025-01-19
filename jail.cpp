#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , m , temp = 0;
    cin >> n >> m;
    int a[n];
    for(int i = 0; i < n; i++){
        a[i] = i+1;
    }
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= m; j++){
            if(temp == n){
                    temp = 0;
            }
            while(a[temp] == 0){
                temp++;
                if(temp == n){
                    temp = 0;
                }
            }
            if(j == m){
                cout << a[temp] << " ";
                a[temp] = 0;
            }
            temp++;
        }
    }
}
