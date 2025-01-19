#include <bits/stdc++.h>
using namespace std;


int main(){

    int x,y;

    cin >> x >> y;

    int ma1[x][y];

    int ma2[x][y];

    int masum[x][y];

    for(int i = 0; i < x; i++){

        for(int j = 0; j < y; j++){

            cin >> ma1[i][j];

        }

    }

    for(int i = 0; i < x; i++){

        for(int j = 0; j < y; j++){

            cin >> ma2[i][j];

        }

    }

    for(int i = 0; i<x; i++){

        for(int j = 0; j< y; j++){

            masum[i][j] = ma1[i][j] + ma2[i][j];

        }

    }

    for(int i = 0; i < x; i++){

        for(int j = 0; j < y; j++){

            cout << masum[i][j] << " ";

        }

        cout << "\n";

    }

}

