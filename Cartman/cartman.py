def solve():
    n, q = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    c = [0] * (n + 1)
    
    for i in range(n):
        c[i + 1] = c[i] + b[i] * a[i]

    for _ in range(q):
        l, r = map(int, input().split())
        print(c[r] - c[l - 1])


def main():
    t = int(input())
    for _ in range(t):
        solve()



if __name__ == "__main__":
    main()
