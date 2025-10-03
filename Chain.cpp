//*https://programming.in.th/tasks/toi1_chain
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l, n, d = 0, w;
    cin >> l >> n;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            w = i;
            break;
        }
        for (int j = 0; j < l; j++)
        {
            if (s[i][j] != s[i + 1][j])
            {
                d++;
            }
        }
        if (d > 2)
        {
            w = i;
            break;
        }
        d = 0;
    }
    cout << s[w];
}