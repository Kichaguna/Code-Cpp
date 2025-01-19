/*#include <bits/stdc++.h>
using namespace std;
int sum[5];
int main(){
    int score[5][4],temp[5],ans[1][1];
    for(int i = 0; i<5; i++){
        for(int j = 0; j<4; j++){
            cin >> score[i][j];
        }
    }
    for(int i = 0; i < 5; i++){
        for(int j = 0; j<4; j++){
            sum[i] += score[i][j];
        }
    }
    int mx=0;
    for(int i = 0; i < 5; i++){
        mx=max(mx,sum[i]);
    }
    for(int i = 0; i < 5; i++){
        if(mx == sum[i]){
            cout << i+1 << " " << sum[i];
            break;
        }
    }
}*/
#include <bits/stdc++.h>

using namespace std;


int main(){

    int score[5][4],sum[5][2],sum2 = 0,temp[5],ans[1][2];

    for(int i = 0; i<5; i++){

        for(int j = 0; j<4; j++){

            cin >> score[i][j];

        }

    }

    for(int i = 0; i < 5; i++){

        sum[i][0] = i+1;

        for(int j = 0; j<4; j++){

            sum2 = sum2 + score[i][j];

        }

        sum[i][1] = sum2;

        sum2 = 0;

    }

    for(int i = 0; i < 5; i++){

        temp[i] = sum[i][1];

    }

    sort(temp, temp+5);

    for(int i = 0; i < 5; i++){

        if(temp[4] == sum[i][1]){

            ans[0][0] = sum[i][0];

            ans[0][1] = sum[i][1];

            break;

        }

    }

    cout << ans[0][0] << ' ' << ans[0][1];

}
