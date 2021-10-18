import sys
input = sys.stdin.readline
t = int(input())
for _ in range(t):
    w = int(input())
    arr = list(map(int, input().split()))
    if w >= sum(arr):
        print("YES")
    else:
        print("NO")