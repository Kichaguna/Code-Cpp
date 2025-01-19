#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,range,cou = 0;
    cin >> n;
    int num[n];
    int fin[range];
    for(int i = 0; i < n; i++){
        cin >> num[i];
    }
    cin >> range;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < range; j++){
            fin[cou] = num[cou];
            cou++;
        }
        cou = cou - n + 1;
        }
    for(int i = 0; i< n; i++){
        for(int j = 0; j < range; j++){
            if(fin[j] < 0){
                cout << fin[j] <<" ";
                break;
            }
            else if(j == range -1){
                cout << 0 << " ";
            }
        }
    }
}
