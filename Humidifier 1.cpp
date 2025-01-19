#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , w = 0 , c = 0;
    cin >> n;
    int a[n][2];
    for(int i = 0 ; i< n;i++){
        cin >> a[i][0] >> a[i][1];
    }
    for(int i = 1; i <= a[n-1][0]; i++){
        if(w > 0){
            w--;
        }
        if(i == a[c][0]){
            //cout << "Before adding now at " << w << " Litters";
            //cout << " Adding " << a[c][1] << " Litters";
            w += a[c][1];
            c++;
            //cout << " Now at " << w << " Litters" << endl;
        }
    }
    cout << w;
}
