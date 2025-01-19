#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , l;
    cin >> n;
    string num[n];
    for(int i = 0; i < n; i++){
        cin >> num[i];
    }
    for(int i = 0; i < n; i++){
        l = num[i].size();
        if((num[i][l-1] - '0') % 2 != 0){
            cout << "T\n";
        }
        else if(num[i][0] - '0' == 2 && l == 1){
            cout << "T\n";
        }
        else{
            cout << "F\n";
        }
    }
}
