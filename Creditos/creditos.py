import sys
from collections import deque

input = sys.stdin.readline
write = sys.stdout.write

def fast_print(x): write(str(x) + '\n')

def main():
    n, m = map(int, input().split())

    ady = [[] for _ in range(n)]
    grado = [0] * n

    for _ in range(m):
        v, u = map(int, input().split())
        v -= 1
        u -= 1
        ady[u].append(v)  
        grado[v] += 1

    dp = [1] * n
    q = deque()

    for i in range(n):
        if grado[i] == 0:
            q.append(i)

    while q:
        v = q.popleft()
        for u in ady[v]:
            dp[u] = max(dp[u], dp[v] + 1)
            grado[u] -= 1
            if grado[u] == 0:
                q.append(u)

    ans = max(dp)
    fast_print(ans * 100000)


if __name__ == '__main__':
    main()