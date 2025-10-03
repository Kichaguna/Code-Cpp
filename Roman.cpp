//*https://programming.in.th/tasks/toi1_plate
#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    int count[5] = {0 , 0 , 0 , 0 , 0};
    string c = "ixc" , f = "vl";
    for(int k = 1; k <= n; k++){
        string s;
        string inp = to_string(k);
        int len = inp.size();
        for(int i = 0; i < len; i++){
            int tempc = len - i - 1;
            int temp = inp[i] - '0';
            if(temp <= 3){
                for(int j = 0; j < temp; j++){
                    s.push_back(c[tempc]);
                }
            }
            else if(temp == 4){
                s.push_back(c[tempc]);
                s.push_back(f[tempc]);
            }
            else if(temp == 5){
                s.push_back(f[tempc]);
            }
            else if(temp < 9){
                s.push_back(f[tempc]);
                for(int j = 0; j < temp - 5; j++){
                    s.push_back(c[tempc]);
                }
            }
            else{
                s.push_back(c[tempc]);
                s.push_back(c[tempc+1]);
            }
        }
        len = s.size();
        for(int i = 0; i < len; i++){
            if(s[i] == 'i'){
                count[0]++;
            }
            if(s[i] == 'v'){
                count[1]++;
            }
            if(s[i] == 'x'){
                count[2]++;
            }
            if(s[i] == 'l'){
                count[3]++;
            }
            if(s[i] == 'c'){
                count[4]++;
            }
        }
    }
    for(int i = 0; i < 5; i++){
        cout << count[i] << " ";
    }   
}