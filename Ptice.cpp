//*https://programming.in.th/tasks/0016
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int maxA = 0 , maxB = 0 , maxG = 0 , n;
    string s , A = "ABC" , B = "BABC" , G = "CCAABB";
    cin >> n >> s;
    for(int i = 0; i < n; i++){
        if(s[i] == A[i%3]){
            maxA++;
        }
        if(s[i] == B[i%4]){
            maxB++;
        }
        if(s[i] == G[i%6]){
            maxG++;
        }
    }
    int maxpos = max({maxA , maxB , maxG});
    cout << maxpos << endl;
    if(maxpos == maxA){
        cout << "Adrian" << endl;
    }
    if(maxpos == maxB){
        cout << "Bruno" << endl;
    }
    if(maxpos == maxG){
        cout << "Goran" << endl;
    }
}