#include <bits/stdc++.h>
using namespace std;

int main(){
    int n[4];
    int area;
    for(int i = 0; i < 4; i++){
        cin >> n[i];
    }
    sort(n , n+4);
    area = n[0] * n[2];
    cout << area;
}
