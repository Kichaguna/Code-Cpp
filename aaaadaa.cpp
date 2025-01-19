#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string c;
    char a , b;
    cin >> n >> a >> b >> c;
    for(int i = 0; i < n; i++){
        if(c[i] != a){
            c[i] = b;
        }
        cout << c[i];
    }
}
