#include <bits/stdc++.h>
using namespace std;

int main(){
    int sum = 0;
    string n;
    cin >> n;
    for(int i = 0 ; i < n.size(); i++){
        if(n[i] == '0'){
            if(n[i+1] == '0' && i+1 < n.size()){
                sum++;
                i++;
            }
            else{
                sum++;
            }
        }
        else{
            sum++;
        }
    }
    cout << sum;
}
