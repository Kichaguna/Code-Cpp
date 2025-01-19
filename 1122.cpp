#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , s;
    string x;
    cin >> n;
    cin >> x;
    s = (n + 1) / 2;
    if(n % 2 == 0){
        cout << "No";
    }
    else if(n == 1 && x[0] == '/'){
        cout << "Yes";
    }
    else if(x[s-1] == '/'){
        for(int i = 0; i < s-1; i++){
            if(x[i] != '1'){
                cout << "No";
                return 0;
            }
        }
        for(int i = s; i < n; i++){
            if(x[i] != '2'){
                cout << "No";
                return 0;
            }
        }
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}
