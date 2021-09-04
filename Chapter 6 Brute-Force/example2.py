n = int(input())
m = int(input())
# for i in range(n):
#     for j in range(i + 1, n):
#         for k in range(j + 1, n):
#             for l in range(k + 1, n):
#                 print(i, j, k, l)

def recursive(arr, index, n, m):
    if m == 0:
        print(arr)
        return 
    for i in range(index, n):
        arr.append(i)
        print(arr, index, n, m)
        recursive(arr,i + 1, n, m - 1)
        arr.pop()
    print()

arr = []
print(recursive(arr, 0, n, m))