#include <bits/stdc++.h>
using namespace std;

int main(){
    int x1,y1,x2,y2,y = 0,v=0;
    cin >> x1 >> y1;
    int mtx1[x1][y1];
    for(int i = 0; i < x1; i++){
        for(int j = 0; j < y1; j++){
            cin >> mtx1[i][j];
         }
    }
    cin>> x2 >> y2;
    int mtx2[x2][y2];
    for(int i = 0; i < x2; i++){
        for(int j = 0; j < y2; j++){
            cin >> mtx2[i][j];
        }
    }
    int sum[x1][y2];
    for(int i = 0; i < x1; i++){
        for(int j = 0; j < y2; j++){
            sum[i][j] = 0;
        }
    }
    if(x1 != y2){
        cout << "Impossible";
    }
    else{
        for(int k = 0; k < x1; k++){//loop change x
            for(int i = 0; i < y2; i++){//loop change y
                      for(int j = 0; j < y1; j++){
                    sum[k][i] = (mtx1[k][j] * mtx2[j][i]) + sum[k][i];//loop for sum
                }
            }
        }
        for(int i = 0; i < x1; i++){
            for(int j = 0; j < y2; j++){
                printf("%5d ",sum[i][j]);
            }
            cout << "\n";
        }
    }
}
