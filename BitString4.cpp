//*https://programming.in.th/tasks/toi20_bit_string
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n , q;
    cin >> n >> q;
    int w[1<<n];
    int maxpath[1<<n];
    for(int i = 0;i < 1<<n; i++){
        string temp;
        cin >> temp;
        int ctemp = 0;
        for(int j = 0; j < n; j++){
            ctemp = (ctemp << 1) | (temp[j] - '0');
        }
        cin >> w[ctemp];
    }
    maxpath[0] = w[0];
    for(int i = 1; i < 1 << n; i++){
        int maxnum = INT_MIN;
        for(int j = 0; j < n - 1; j++){
            if((1<<j) & i){
                maxnum = max(maxnum , maxpath[(1<<j) ^ i]);

            }
            if(((1<<j) & i) && ((1<<j+1) & i)){
                maxnum = max(maxnum , maxpath[(1<<j) ^ (1<<j+1) ^ i]);
            }
        }
        if((1<<(n-1)) & i){
            maxnum = max(maxnum , maxpath[(1<<(n-1)) ^ i]);
        }
        
        maxpath[i] = maxnum + w[i];
    }
    for(int i = 0; i < q; i++){
        string temp;
        cin >> temp;
        int ctemp = 0;
        for(int j = 0; j < n; j++){
            ctemp = (ctemp << 1) | (temp[j] - '0');
        }
        cout << maxpath[ctemp] << endl;
    }
}