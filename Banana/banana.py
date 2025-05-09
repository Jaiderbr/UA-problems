def solve():
    a, b = input().split()

    n = len(a)
    m = len(b)
    mx = max(n, m)

    if n < m:
        a = '0' * (m - n) + a
    if m < n:
        b = '0' * (n - m) + b

    ans = ""
    for i in range(mx):
        x = int(a[i])
        y = int(b[i])
        ans += str((x + y) % 10)

    print(int(ans))

def main():
    testcase = int(input())
    for _ in range(testcase):
        solve()


if __name__ == "__main__":
    main()
