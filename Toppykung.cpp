//*https://programming.in.th/tasks/0038
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<string> word(n);
    for(int i =0; i < n; i++){
        cin >> word[i];
    }
    sort(word.begin() , word.end());
    cout << word[0] << endl;
    for(int i = 1; i < n; i++){
        if(word[i-1] != word[i]){
            cout << word[i] << endl;
        }
    }
}