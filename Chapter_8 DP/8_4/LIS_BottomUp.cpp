#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int dp[501];
int numberArray[501];
int main()
{
    FASTIO
    // test Case 개수
    int c;
    cin >> c;

    while (c--)
    {
        // 배열 받을 개수
        int n;
        cin >> n;
        memset(dp, 0, sizeof(dp));
        for (int i = 1 ; i < n + 1 ; ++i)
            cin >> numberArray[i];
        int maxValue = 0;
        for (int i = 1 ; i < n + 1 ; ++i)
        {
            for (int j = 0 ; j < i ; ++j)
            {
                // 앞의 값보다 큰 경우
                // dp[j]번째 값 + 1과 dp[i]번째 값 비교 후 갱신
                if (numberArray[j] < numberArray[i])
                    dp[i] = max(dp[i], dp[j] + 1);
            }
            // max값 갱신
            maxValue = max(maxValue, dp[i]);
        }
        cout << maxValue << '\n';
    }
}