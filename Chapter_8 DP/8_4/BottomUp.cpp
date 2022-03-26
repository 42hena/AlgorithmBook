#include <bits/stdc++.h>
using namespace std;
int triangle[100][100];
int n;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0 ; i < n ; ++i)
        {
            for (int j = 0 ; j < i + 1 ; ++j)
            {
                cin >> triangle[i][j];
            }
        }
        int maxValue = 0;
        for (int i = 1 ; i < n ; ++i)
        {
            for (int j = 0 ; j < i + 1 ; ++j)
            {
                if (j - 1 >= 0)
                    triangle[i][j] = max(triangle[i - 1][j], triangle[i - 1][j - 1]) + triangle[i][j];
                else
                    triangle[i][j] += triangle[i - 1][j];
            }
        }
        for (int i = 0 ; i < n ; ++i)
            maxValue = max(triangle[n - 1][i], maxValue);
        cout << maxValue << '\n';
    }
}