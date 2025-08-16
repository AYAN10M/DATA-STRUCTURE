t = int(input())
while t > 0:
    s = list(input())
    i = 0
    while i < len(s) - 1:
        if s[i] == s[i + 1]:
            if i > 0:
                s[i] = s[i - 1]
            else:
                s[i] = 'a'
            s.pop(i + 1)
            
            if i > 0:
                i -= 1
        else:
            i += 1
    print(len(s))
    t -= 1