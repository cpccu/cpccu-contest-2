n = int(input())
s = input()

na = s.count('L')
nb = s.count('O')

ans = -1
x, y = 0, 0

for p in range(len(s) - 1):
    if s[p] == 'L':
        x += 1
    elif s[p] == 'O':
        y += 1

    if (x != na - x) and (y != nb - y):
        ans = p + 1
        break

print(ans)
