#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ,cou1 = 1,space1,space2 =1;
    cin >> n;
;    space1 = (2*(n-1))-1;
    for(int i = 0; i < n; i++){
        if(i == 0){
            cout << cou1;
            for(int j = 0;j < space1; j++){
                cout << " ";
            }
            cout << cou1;
            cou1++;
            space1 -= 2;
            cout << "\n";
        }
        else if(i != n-1){
            for(int j = 0; j < space2; j++){
                cout << " ";
            }
            cout << cou1;
            for(int j = 0; j < space1; j++){
                cout << " ";
            }
            cout << cou1;
            for(int j = 0; j < space2; j++){
                cout << " ";
            }
            space1 -= 2;
            space2 += 1;
            cou1++;
            cout << "\n";
        }
        else if( i == n-1){
            for(int j = 0; j < space2; j++){
                cout << " ";
            }
            cout << cou1;
            for(int j = 0; j < space2; j++){
                cout << " ";
            }
            cout << "\n";
        }
    }
    cou1--;
    space1 = 1;
    for(int i = 0; i < n; i++){
        if(i != n-2){
            for(int j = 0; j < cou1-1; j++){
                cout << " ";
            }
            cout << cou1;
            for(int j = 0; j < space1; j++){
                cout << " ";
            }
            cout << cou1;
            for(int j = 0; j < cou1-1; j++){
                cout << " ";
            }
            space1 += 2;
            cou1--;
            cout << "\n";
        }
        else if(i == n-1){
            cout << cou1;
            for(int j = 0; j < (2*(n-1))-1; j++){
                cout << " ";
            }
            cout << cou1;
        }
    }
}
