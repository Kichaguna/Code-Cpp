//*https://programming.in.th/tasks/0036
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n , count = 0;
    cin >> n;
    if(n == 2 || n == 1){
        cout << 2;
        return 0;
    }
    int powofn = 1;
    powofn = powofn << n;
    powofn--;
    for(int i = 1; i <= powofn; i++){
        int tempc = i , c0 = 0, c1 = 1;
        string indec;
        while(tempc != 0){
            indec += (tempc % 2) + 48;
            if(tempc % 2){
                c1++;
            }
            else{

                c0++;
            }
            tempc /= 2;
        }
        if(abs(c1 - c0) <= 1){
            count++;
        }
    }
    cout << count;
}