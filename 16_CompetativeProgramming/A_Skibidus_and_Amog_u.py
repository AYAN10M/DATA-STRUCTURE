t = int(input())
while t > 0:
    w = input()
    if len(w) == 2:
        print("i")
    else:
        for i in range(0, len(w)-2):
            print(w[i], end="")
        print("i")
    t = t - 1