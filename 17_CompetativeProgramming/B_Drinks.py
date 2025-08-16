n = int(input())
drinks = list(map(int, input().split()))
sum = 0

for i in range(n):
    sum += drinks[i]

formatted_average = "{:.10f}".format(sum / n)

print(formatted_average)
