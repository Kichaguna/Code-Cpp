//*https://programming.in.th/tasks/toi2_word
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n , m;
    cin >> n >> m;
    string s[n];
    for(int i = 0; i < n; i++){
        cin >> s[i];
        for(int j = 0; j < m; j++){
            int temp = s[i][j] - 'A';
            if(temp>= 0 && temp <= 25){
                s[i][j] += 32;
            }
        }
    }
    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        string temp;
        cin >> temp;
        int len = temp.size();
        for(int j = 0;j < len; j++){
            int tempc = temp[j] - 'A';
            if(tempc >= 0 && tempc <= 25){
                temp[j] += 32;
            }
        }
        for(int j = 0; j < )
    }
}