//*https://programming.in.th/tasks/toi20_lover
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n , v,  w, begin = 0, m = 0 , until = 0;
    cin >> n >> v >> w;
    int cost[n];
    for(int i = 0; i<n; i++) cin >> cost[i];
    while(begin < n){
        m++;
        int temp = 0;
        for(int i = begin; i < begin + ((n - begin)>>1); i++){
            until++;
            if(cost[i] & 1){
                if(temp+cost[i] <= v){
                    temp += cost[i];
                }
                else{
                    until--;
                    break;
                }
            }
        }
        temp = 0;
        begin += until;
        for(int i = begin; i < begin + until; i++){
            if(cost[i] & 1 == 0){
                if(temp + cost[i] <= w){
                    temp+= cost[i];
                }
                else{
                    begin--;
                    until--;
                    i = begin;
                }
            }
        }
        begin += until;
        until = 0;
    }
    cout << m;
}