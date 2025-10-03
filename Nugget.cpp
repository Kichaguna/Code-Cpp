//*https://programming.in.th/tasks/toi1_nugget
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<bool> nugget(n+1 , false);
    nugget[0] = true;
    for(int i = 0; i <= n+1; i++){
        if(nugget[i]){
            if(i + 6 <= n){
                nugget[i + 6] = true;
            }
            if(i + 9 <= n){
                nugget[i + 9] = true;
            }
            if(i + 20 <= n){
                nugget[i + 20] = true;
            }
        }
    }
    if(n > 5){
        for(int i = 6; i <= n; i++){
            if(nugget[i]){
                cout << i << endl;
            }
        }
    }
    else{
        cout << "no";
    }
}