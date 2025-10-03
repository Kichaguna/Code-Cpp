//*https://programming.in.th/tasks/0037
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n , m , l , k , c , sum = 0;
    cin >> n >> m >> l >> k >> c;
    int a = n * m;
    for(int i = 0; i < a; i++){
        int temp;
        cin >> temp;
        sum += temp;
    }
    sum += k * c * l;
   cout << (sum + c - 1) / c;
}