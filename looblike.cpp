#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , check = 1,coun = 0,ma;
    cin >> n;
    int an[n];
    for(int i = 0; i < n; i++){
        cin >> an[i];
    }
    int fn[n];
    for(int i = 0; i< n; i++){
        fn[i] = 0;
    }
    for(int i = 0; i< n; i++){
        for(int j = 0; j < n; j++){
            if(an[i] == fn[j]){
                check = 0;
                break;
            }
        }
        if(check == 1){
            fn[coun] = an[i];
            coun++;
        }
        check = 1;
    }
    int fnn[coun][2];
    int score[coun];
    for(int i = 0; i< coun; i++){
        fnn[i][1] = fn[i];
        fnn[i][0] = 0;
    }
    for(int i = 0; i < coun; i++){
        for(int j = 0; j < n; j++){
            if(fnn[i][1] == an[j]){
                fnn[i][0]++;
            }
        }
        score[i] = fnn[i][0];
    }
    sort(score , score + coun);
    ma = score[coun-1];
    int ans[coun];
    for(int i = 0; i < coun; i++){
        ans[i] = 0;
        if(fnn[i][0] == ma){
            ans[i] = fnn[i][1];
        }
    }
    sort(ans, ans + coun);
    for(int i = 0; i< coun; i++){
        if(ans[i] != 0){
            cout << ans[i] << " ";
        }
    }
}
