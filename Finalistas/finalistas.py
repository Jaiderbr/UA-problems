def solve():
    m, e, j, d = map(int, input().split())

    ans = 0
    ans = max(ans, e + j)
    ans = max(ans, e + d)
    ans = max(ans, j + d)

    if ans >= m:
        print("Clasificados")
    else:
        print("Nadie clasifica")


def main():
    testcase = int(input())
    for _ in range(testcase):
        solve()


if __name__ == "__main__":
    main()
