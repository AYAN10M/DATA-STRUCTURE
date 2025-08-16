arr = input()
size = len(arr)
finalArr = []

for i in range(1, size - 1):
    if arr[i] not in finalArr:
        if arr[i] == ' ' or arr[i] == ',':
            pass
        else:
            finalArr.append(arr[i])


print(len(finalArr))
