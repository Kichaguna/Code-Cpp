#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,c = 0;
    string a;
    getline(cin , a);
    n = a.size();
    for(int i = 0; i < n; i++){
        cout << a[i];
        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u'){
            i +=2;
        }
    }
}
