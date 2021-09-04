// 필수 조건: n >= 1
// 결과: 1부터 n까지의 합을 반환한다.
int sum(int n)
{
    int ret = 0;
    for(int i = 1 ; i <= n ; i++)
        ret += i;
    return (ret);
}

// 필수 조건: n >= 1
// 결과: 1부터 n까지의 합을 반환한다.
int recursiveSum(int n)
{
    if(n == 1) return 1; // 더이상 쪼개지지 않을 때
    return (n + recursiveSum(n - 1));
}

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    printf("for start\n");
    printf("%d\n", sum(n));
    printf("for end\n");
    printf("recursive start\n");
    printf("%d\n", recursiveSum(n));
    printf("recursive end\n");
}