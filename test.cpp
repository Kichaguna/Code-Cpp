#include <bits/stdc++.h>
using namespace std;

void num(int &n){
    *n = *n + 1;
}

int main(){
    int n;
    cin >> n;
    num(&n);
    cout << n;
}
