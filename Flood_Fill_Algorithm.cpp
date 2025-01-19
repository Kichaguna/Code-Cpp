#include <bits/stdc++.h>
using namespace std;

int main(){
    int y,x,changex,changey,ncolor;
    cin >> y>>x;
    int num[y][x];
    for(int i = 0; i < y; i++){
        for(int j = 0; j<x; j++){
            cin >> num[i][j];
        }
    }
    cin >> changey>>changex;
    cin >> ncolor;
    for(int i = 0; i < y; i++){
        for(int j = 0; j<x;j++){
            if(num[i][j] != 0){
                num[i][j] = ncolor;
            }
            if(num[i][j] == 0){
                break;
            }
        }
    }
    for(int i = 0; i < y; i++){
        for(int j = 0; j<x;j++){
            cout << num[i][j]<< " ";
        }
        cout << "\n";
    }
}
