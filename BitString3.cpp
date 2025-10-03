//*https://programming.in.th/tasks/toi20_bit_string
#include <bits/stdc++.h>
using namespace std;

int dp[1048576];
int visit[1048576];
int n,q;
int w[1048576];
int pow2[20] = {1};

int findmax(int inten){
    int maxSum = INT_MIN;
    if(visit[inten]){
        return dp[inten];
    }
    if(inten == 0){
        return w[0];
    }
    bitset<20> b(inten);
    for(int i = 0; i < n; i++){
        if(b[i]){
            maxSum = max(maxSum,findmax(inten - pow2[i]));
            if(b[i+1] == 1) maxSum = max(maxSum,findmax(inten - pow2[i] - pow2[i+1]));
        }
    }
    if(b[n-1]) maxSum = max(maxSum,findmax(inten - pow2[n-1]));
    dp[inten] = maxSum + w[inten];
    visit[inten] = 1;
    return dp[inten];
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    memset(visit,0,sizeof(visit));
    cin >> n >> q;
    for(int i = 0; i < 1 << n; i++){
        string temp;
        cin >> temp;
        cin >> w[];
    }
    for(int i = 0; i < q; i++){
        string temp;
        cin >> temp;
        bitset<20> b(temp);
        cout << findmax(b.to_ulong()) << endl;
    }
}
0110 1001
0000 0001
0110 1000