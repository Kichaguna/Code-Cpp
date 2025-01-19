#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,sum = 0;
    cin >> n;
    int in[n*2];
    for(int i = 0; i< n *2; i++){
        cin >> in[i];
    }
    sort(in , in+n*2);
    for(int i = (n * 2) - 2; i >= 0; i-=2){
        sum += in[i];
    }
    cout << sum;
}
