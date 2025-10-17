n = 4
size = 2 * n - 1

for i in range(size):
    for j in range(size):
        value = n - min(min(i, j), min(size - 1 - i, size - 1 - j))
        print(value, end=" ")
    print()
