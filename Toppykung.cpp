#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , check = 0,coun = 0,coun2 = 0;
    cin >> n;
    string temp;
    string sen[n];
    string facsen[n];
    int
    for(int i = 0; i< n; i++){
        cin >> sen[i];
    }
    for(int i = 0; i < n; i++){
        temp = sen[i];
        for(int j = 0; j < n; j++){
            if(temp == facsen[j]){
                check = 1;
                break;
            }
        }
        if(check == 0){
            facsen[coun] = sen[i];
            coun++;
        }
        check = 0;
    }
    int sortsen[coun];
    int tempsen[coun];
    for(int i = 0; i < coun; i++){
        sortsen[i] = facsen[i][0];
        tempsen[i] = sortsen[i];
    }
    sort(tempsen , tempsen + coun);
    for(int i = 0; i< coun; i++){
        for(int j = 0; j < coun; j++){
            if(tempsen[i] == tempsen[j] && j != i){
                check = 1;
                coun2++;
                break;
            }
        }
        if(check == 0){
            for(int j = 0; j < coun; j++){
                if(tempsen[i] == sortsen[j]){
                    cout << facsen[j] << "\n";
                    break;
                }
            }
        }
        else{
            int same [2][coun2];
            for(int j = 0; j < coun2; j++){
                same[]
            }
        }
        check = 0;
    }
}
