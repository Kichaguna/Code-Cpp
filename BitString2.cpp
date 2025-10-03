//*https://programming.in.th/tasks/toi20_bit_string

#include <bits/stdc++.h>

using namespace std;


int main()

{

    ios::sync_with_stdio(0);

    cin.tie(0);

    int n, q;

    cin >> n >> q;

    int pow2[n + 1] = {1};

    for (int i = 1; i <= n; i++) pow2[i] = pow2[i - 1] * 2;

    int l = pow2[n];

    string deci[l];

    int w[l];

    for (int i = 0; i < l; i++){

        string temp;

        int ctemp = 0;

        cin >> temp;

        for (int j = 0; j < n; j++){

            ctemp += (temp[j] - '0') * pow2[n - 1 - j];

        }

        deci[ctemp] = temp;

        cin >> w[ctemp];

    }

    int p[l] = {w[0]};

    for (int i = 1; i < l; i++){

        int max = INT_MIN;

        for (int j = 0; j < n; j++){

            if (deci[i][j] == '1'){

                int temp = i;

                temp -= pow2[n - 1 - j];

                if (p[temp] > max){

                    max = p[temp];

                }

            }

            if(j!= n-1){

                if (deci[i][j] == '1' && deci[i][j + 1] == '1'){

                    int temp = i;

                    temp -= pow2[n - 1 - j];

                    temp -= pow2[n - 2 - j];

                    if (p[temp] > max){

                        max = p[temp];

                    }

                }    

            }

        }

        p[i] = max + w[i];

    }

    for (int i = 0; i < q; i++){

        string temp;

        int ctemp = 0;

        cin >> temp;

        for (int j = 0; j < n; j++){

            ctemp += (temp[j] - '0') * pow2[n - 1 - j];

        }

        cout << p[ctemp] << endl;

    }

}