#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n , maxrow = INT_MIN;
    cin >> n;
    int pattern[n][3];
    for(int i = 0 ; i < n; i++){
        cin >> pattern[i][0] >> pattern[i][1] >> pattern[i][2];
        if(maxrow < pattern[i][0]){
            maxrow = pattern[i][0];
        }
    }
    vector<x;
    for(int i = 0; i < n; i++){
        int w1 = pattern[i][1] , w2 = pattern[i][2];
        for(int j = w1 - 1; j < w2 + w1 - 1 && j < 70; j++){
            cloth[pattern[i][0]-1][j] = 'x';
        }
    }
    for(int i = 0; i < maxrow; i++){
        for(int j = 0; j < 70; j++){
            cout << cloth[i][j];
        }
        cout << endl;
    }
}