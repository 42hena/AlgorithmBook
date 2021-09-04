# C = int(input())
from itertools import permutations
n, m = map(int, input().split())

friendship = [[0]* (n + 1) for _ in range(n + 1)]
print(friendship)
array = list(map(int, input().split()))
while array != []:
    v2 = array.pop()
    v1 = array.pop()
    friendship[v1][v2] = 1
    friendship[v2][v1] = 1
test = permutations([i for i in range(1, n + 1)], 2)
print(test)
