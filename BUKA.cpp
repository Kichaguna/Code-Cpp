#include <bits/stdc++.h>
using namespace std;

int main(){
    int x ,y,c,d;
    string a , b;
    char o;
    cin >> a >> o >> b;
    x = a.size();
    y = b.size();
    c = a[0] - '0';
    d = b[0] - '0';
    if(o == '+'){
        if(x > y){
            cout << a[0];
            for(int i = 0; i< x-y-1; i++){
                cout << 0;
            }
            cout << b[0];
            for(int i = 0; i < y-1; i++){
                cout << 0;
            }
        }
        else if(y>x){
            cout << b[0];
            for(int i = 0; i< y-x-1; i++){
                cout << 0;
            }
            cout << a[0];
            for(int i = 0; i < x-1; i++){
                cout << 0;
            }
        }
        else if(x == y){
            cout << c+d;
            for(int i = 0; i< x-1; i++){
                cout << 0;
            }
        }
    }
    else{
        cout << c * d;
        for(int i = 0; i < x+y-2; i++){
            cout << 0;
        }
    }
}
