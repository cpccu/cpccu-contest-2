t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    csa = 0
    mb = 0
    ans = 0

    for p in range(min(n, k)):
        csa += a[p]
        mb = max(mb, b[p])
        tst = csa + (k - p - 1) * mb
        ans = max(ans, tst)

    print(ans)
