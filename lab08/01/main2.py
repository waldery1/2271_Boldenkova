# Переписанная программа с while без break и not
x = [int(t) for t in input().split()]
i = 0
while i < len(x) and i <= x[i] <= 2 * i:
    i += 1
print(i)
