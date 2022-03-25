#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> fence(n, 0);
        for (int i = 0; i < n; ++i)
            cin >> fence[i];

        int maxValue = 0;
        for (int i = 0; i < n; ++i)
        {
            int h = 10000;
            for (int j = i; j < n; ++j)
            {
                h = min(h, fence[j]);
                maxValue = max(maxValue, h * (j - i + 1));
            }
        }
        cout << maxValue << '\n';
    }
}