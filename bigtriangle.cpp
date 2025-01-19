#include <bits/stdc++.h>

using namespace std;

int main(){
    float x1 , y1 , x2, y2 , x3 , y3 , coun , temp ,area = 0;
    int n;
    cin >> n;
    int cor[n][2];
    for(int i = 0; i < n; i++){
        cin >> cor[i][0] >> cor[i][1];
    }
    for(int i = 0; i < n - 2; i++){
        x1 = cor[i][0];
        y1 = cor[i][1];
        for(int j = i + 1; j < n; j++){
            x2 = cor[j][0];
            y2 = cor[j][1];
            for(int k = j + 1; k < n; k++){
                x3 = cor[k][0];
                y3 = cor[k][1];
                temp = (x1 * y2) + (x2 * y3) + (x3 * y1) - (y1 * x2) - (y2 * x3) - (y3 * x1);
                if(temp < 0){
                    temp *= -1;
                }
                temp /= 2;
                if(temp > area){
                    area = temp;
                }
            }
        }
    }
    printf("%.3f",area);
}
