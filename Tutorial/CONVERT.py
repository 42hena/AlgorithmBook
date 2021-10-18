n = int(input())

for i in range(1,n + 1):
    num, kind = map(str, input().split())
    num = float(num)
    if kind == "kg":
        print(i, format(num * 2.2046, ".4f"), "lb")
    elif kind == "lb":
        print(i, format(num * 0.4536, ".4f"), "kg")
    elif kind == "l":
        print(i, format(num * 0.2642, ".4f"), "g")
    elif kind == "g":
        print(i, format(num * 3.7854, ".4f"), "l")