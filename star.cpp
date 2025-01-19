#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x,r,c=1,a=1,b=0;
    cin >> n;
    x = n;
    r = n;
    if(x % 2 != 0){
        x += 1;
    }
    if(r % 2 != 1){
        r -= 1;
    }
    if(x != 2){
        for(int i = 0; i < x/2; i++){
            if(i == 0){
                for(int j = 0; j < r/2; j++){
                    cout << "-";
                }
                cout << "*";
                for(int j = 0; j < r/2; j++){
                    cout << "-";
                }
                cout << "\n";
            }
            else if(i != x/2){
                for(int j = 0; j < r/2-c;j++){
                    cout << "-";
                    }
                cout << "*";
                for(int j = 0; j < a; j++){
                    cout << "-";

                }
                cout << "*";
                for(int j = 0; j < r/2-c;j++){
                    cout << "-";
                }
                c++;
                a += 2;
                cout << "\n";
            }
            else if(i == (x/2)-1){
                cout << "*";
                for(int j = 0; j < r-2; j++){
                    cout <<"-";
                }
                cout << "*";
            }
        }
        if(n % 2 == 0){
            cout << "*";
            for(int j = 0; j < r-2; j++){
                    cout <<"-";
            }
            cout << "*";
            cout << "\n";
        }
        c = r-4;
        for(int i = 0; i < (x/2)-1; i++){
            if(i != (x/2)-2){
                for(int j =0; j < i+1; j++){
                    cout << "-";
                }
                cout << "*";
                for(int j = 0; j< c; j++){
                    cout << "-";
                }
                cout << "*";
                for(int j = 0; j< i+1; j++){
                    cout << "-";
                }
                c -= 2;
                cout << "\n";
            }
            else{
                for(int j = 0; j < (r-1)/2; j++){
                    cout << "-";
                }
                cout << "*";
                for(int j = 0; j < (r-1)/2; j++){
                    cout << "-";
                }
            }
        }
    }
    else{
        cout << "*\n*";
    }
}

