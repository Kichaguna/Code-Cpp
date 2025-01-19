#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,temp,cou1 = 0,cou2 = 0;
    cin >> n;
    int num[n];
    for(int i = 0; i< n; i++){
        num[i] = 10;
    }
    for(int i = 0; i< n; i++){
        cin >> temp;
        if(temp != 0){
            num[cou1] = temp;
            cou1++;
        }
        else{
            cou2++;
        }
    }
    sort(num , num + n);
    cout << num[0];
    for(int i = 0; i< cou2; i++){
        cout << 0;
    }
    for(int i = 1; i < cou1; i++){
        cout << num[i];
    }
}
