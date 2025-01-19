#include <bits/stdc++.h>
using namespace std;

int main(){
    int coun,t = 2;
    string cha;
    cin >> cha;
    coun = cha.size();
    cout << "..";
    for(int i = 0; i < coun; i++){
        if((i + 1) % 3 != 0){
            cout << "#";
        }
        else{
            cout << "*";
        }
        if((i + 1) != coun){
            cout << "...";
        }
    }
    cout << "..\n";
    for(int i = 0; i< coun; i++){
        cout << ".";
        if((i + 1) % 3 != 0){
            cout << "#.#";
        }
        else{
            cout << "*.*";
        }
    }
    cout << ".\n";
    for(int i = 1; i<= (coun * 2)+1; i++){
        if(i != (3 * t)+1 && i != (3*t)-1 && i & 2 != 0){
            cout << "#";
        }
        else if(i % 2 == 0){
            cout << cha[(i-1)/2];
        }
        else if(i == (3*t)+1){
            cout << "*";
            t += 2;
        }
        else if(i == (3*t)-1 && i != (coun * 2)+1){
            cout << "*";
        }
        else{
            cout << "#";
        }
        if( i != (coun * 2)+1){
            cout << ".";
        }
    }
    cout << "\n";
    for(int i = 0; i< coun; i++){
        cout << ".";
        if((i + 1) % 3 != 0){
            cout << "#.#";
        }
        else{
            cout << "*.*";
        }
    }
    cout << ".\n";

    cout << "..";
    for(int i = 0; i < coun; i++){
        if((i + 1) % 3 != 0){
            cout << "#";
        }
        else{
            cout << "*";
        }
        if((i + 1) != coun){
            cout << "...";
        }
    }
    cout << "..\n";
}
