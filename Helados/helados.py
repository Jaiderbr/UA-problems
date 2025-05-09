def main():
    testcase = int(input())
    for _ in range(testcase):
        n, m = map(int, input().split())
        need = m * 7

        if need >= n:
            print(0)
            continue

        for i in range(10000):
            if need + (i * 2 * 7) >= n:
                print(i)
                break


if __name__ == "__main__":
    main()
