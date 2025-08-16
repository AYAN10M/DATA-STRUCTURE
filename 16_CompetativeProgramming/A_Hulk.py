n = int(input())

string1 = "I hate"
string2 = "I love"
string3 = " that "
string4 = " it "
string5 = ""

for i in range(0, n):
    if i % 2 == 0:
        if i == n - 1:
            string5 += string1 + string4
        else:
            string5 += string1 + string3
    else:
        if i == n - 1:
            string5 += string2 + string4
        else:
            string5 += string2 + string3

print(string5)
