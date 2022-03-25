#include <bits/stdc++.h>
using namespace std;

int cache[100][100];
int board[100][100];
int n;

int recursive(int y, int x)
{
    if (y >= n || x >= n) return 0;
    if (y == n - 1 && x == n - 1) return 1;
    int &ret = cache[y][x];
    if (ret != -1) return ret;
    int next = board[y][x];
    return ret = recursive(y + next, x) || recursive(y, x + next);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        memset(cache, -1, sizeof(cache));
        for (int i = 0 ; i < n ; ++i)
            for (int j = 0 ; j < n ; ++j)
                cin >> board[i][j];
        recursive(0, 0);
        if (!cache[0][0])
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}