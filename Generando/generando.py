def main():
    test = int(input())
    for _ in range(test):
        s = input()
        n = len(s)

        x = 0
        i, j = 0, n - 1
        while i < j:
            if s[i] != s[j]:
                x += 1
            i += 1
            j -= 1

        if n & 1:
            if x == 0:
                print("PALINDROMO")
                continue

        if x > 1 or (n % 2 == 0 and x == 0):
            print("NO ES POSIBLE")
        else:
            print("PALINDROMO")


if __name__ == "__main__":
    main()
