#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long int n , ans = 1 , c = 0;
    cin >> n;
    while(ans != n){
        c++;
        ans *= c;
    }
    cout << c;
}
