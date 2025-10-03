#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, q, length, temp = 0, count = -1, max = 0;
    cin >> n >> q;
    int twoPow[21] = {1};
    for (int i = 1; i <= 20; i++)
    {
        twoPow[i] = twoPow[i - 1] * 2;
    }
    length = twoPow[n];
    string temps, tempfind;
    string bit2[length];
    int maxpath[length];
    int weight[length];
    int maxse = n + n - 1;
    int pathtemp[maxse];
    int find[q];
    for (int i = 0; i < length; i++)
    {
        cin >> temps;
        for (int j = 0; j < n; j++)
        {
            temp += (temps[j] - '0') * twoPow[n - 1 - j];
        }
        bit2[temp] = temps;
        cin >> weight[temp];
        if (temp == 0)
        {
            maxpath[temp] = weight[temp];
        }
        temp = 0;
    }
    for (int i = 0; i < q; i++)
    {
        cin >> tempfind;
        for (int j = 0; j < n; j++)
        {
            temp += (tempfind[j] - '0') * twoPow[n - 1 - j];
        }
        find[i] = temp;
        temp = 0;
    }
    for (int i = 1; i < length; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (bit2[i][j] == '1')
            {
                count++;
                temps = bit2[i];
                temps[j] = '0';
                for (int k = 0; k < n; k++)
                {
                    temp += (temps[k] - '0') * twoPow[n - 1 - k];
                }
                pathtemp[count] = temp;
                temp = 0;
            }
        }
        for (int j = 0; j < n - 1; j++)
        {
            if (bit2[i][j] == '1' && bit2[i][j + 1] == '1')
            {
                count++;
                temps = bit2[i];
                temps[j] = '0';
                temps[j + 1] = '0';
                for (int k = 0; k < n; k++)
                {
                    temp += (temps[k] - '0') * twoPow[n - 1 - k];
                }
                pathtemp[count] = temp;
                temp = 0;
            }
        }
        for (int j = 0; j < count + 1; j++)
        {
            if (maxpath[pathtemp[j]] > max)
            {
                max = maxpath[pathtemp[j]];
            }
        }
        maxpath[i] = weight[i] + max;
        count = -1;
        max = 0;
    }
    for (int i = 0; i < q; i++)
    {
        cout << maxpath[find[i]] << endl;
    }
}