//*https://programming.in.th/tasks/toi1_brick
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, count;
    cin >> n >> m;
    char box[n][m];
    int maxb[m];
    int brick[m];
    for (int i = 0; i < m; i++)
    {
        maxb[i] = -1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> box[i][j];
            if (box[i][j] == 'O')
            {
                if (i < maxb[j] || maxb[j] == -1)
                {
                    maxb[j] = i;
                }
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        cin >> brick[i];
    }
    for (int i = 0; i < m; i++)
    {
        if (maxb[i] == -1)
        {
            count = 1;
            for (int j = n; count <= brick[i]; count++)
            {
                if (j - count < 0)
                {
                    break;
                }
                box[j - count][i] = '#';
            }
        }
        else
        {
            count = 1;
            for (int j = maxb[i]; count <= brick[i]; count++)
            {
                if (j - count < 0)
                {
                    break;
                }
                box[j - count][i] = '#';
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << box[i][j];
        }
        cout << endl;
    }
}