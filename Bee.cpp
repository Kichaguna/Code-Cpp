//*https://programming.in.th/tasks/toi2_bee
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    vector <bool> year(25 , false);
    int max = INT_MIN;
    int boss = 1, work = 1, sol = 0 , newwork = 0 , newsol = 0;
    for(int i = 0; i < 24; i++){
        int temp;
        cin >> temp;
        if(temp == -1){
            break;
        }
        else{
            year[temp] = true;
            if(temp > max){
                max = temp;
            }
        }
    }
    for(int i = 1; i <= max; i++){
        sol += newsol;
        work += newwork;
        newsol = 0;
        newwork = 1 + work + sol;
        newsol += work;
        sol = 0;
        work = 0;
        if(year[i]){
            cout << newwork << " " << newsol + newwork + 1 << endl;
        }
    }
}