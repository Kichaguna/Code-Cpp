//*https://programming.in.th/tasks/toi20_orbs
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n , l , a , b;
    cin >> n >> l >> a >>b;
    vector <int> orb;
    for(int i = 0 ; i < n; i++){
        int temp;
        cin >> temp;
        orb.push_back(temp);
    }
    sort(orb.begin(),orb.end());
    cout << endl;
    for(int i = 0 ; i < n; i++){
        cout << orb[i] << endl;
    }
    cout << endl;
    for(int i = 0; i < l; i++){
        int temporb1 = orb[b-1] - orb[a-1];;
        int temporb2 = (orb[b-1]+orb[a-1]) >> 1;
        int x = a-1;
        int y = b-1;
        int w1, w2;
        while(x != y){
            int ctemp = (x+y) >> 1;
            if(orb[ctemp] < temporb1){
                x = ctemp + 1;
            }
            else if(orb[ctemp] > temporb1)
                y = ctemp - 1;
            else if(orb[ctemp] == temporb2){
                x = ctemp;
                y = ctemp;
            }
        }
        cout << x << " " << y << endl;
        x = a-1;
        y = b-1;
        while(x != y){
            int ctemp = (x+y) >> 1;
            if(orb[ctemp] < temporb2){
                x = ctemp + 1;
            }
            else if(orb[ctemp] > temporb2)
                y = ctemp - 1;
            else if(orb[ctemp] == temporb2){
                x = ctemp;
                y = ctemp;
            }
            if(y - x == 1){
                break;
            }
        }
        cout << x << " " << y << endl;
    }
}