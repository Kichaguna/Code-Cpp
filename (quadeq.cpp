#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B, C;
    cin >> A >> B >> C;
    int Y = abs(C);
    int c;
    for(int a=1; a<=A; a++){
        if(A%a==0){
            c = A/a;
        }
        for(int b=-1*Y; b<=Y; b++){
            int d;
            if(b!=0 && C%b==0){
                d = C/b;
            }
            if(a*c == A && a*d + b*c == B && b*d == C){
                cout << a << " " << b << " " << c << " " << d;
                return 0;
            }
        }
    }
    cout << "No Solution";
    return 0;
}
