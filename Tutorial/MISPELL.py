n = int(input())
for i in range(n):
    num, string = map(str, input().split())
    num = int(num)
    print(i + 1, string[0:num - 1]+string[num : len(string)])