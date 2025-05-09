mxN = 100

U = [[' ' for _ in range(mxN)] for _ in range(mxN)]
D = [[' ' for _ in range(mxN)] for _ in range(mxN)]
L = [[' ' for _ in range(mxN)] for _ in range(mxN)]
A = [[' ' for _ in range(mxN)] for _ in range(mxN)]

c = '#'
bk = ' '

def pf(a):
    for i in range(10):
        for j in range(10):
            print(a[i][j], end='')
        print()
    print()

def init():
    global U, D, L, A
    U = [[' ' for _ in range(mxN)] for _ in range(mxN)]
    D = [[' ' for _ in range(mxN)] for _ in range(mxN)]
    L = [[' ' for _ in range(mxN)] for _ in range(mxN)]
    A = [[' ' for _ in range(mxN)] for _ in range(mxN)]

def make_U(n):
    for i in range(n):
        U[i][0] = U[n - 1][i] = U[i][n - 1] = c

def make_D(n):
    for i in range(n):
        D[i][0] = D[0][i] = D[n - 1][i] = D[i][n - 1] = c
    D[0][n - 1] = D[n - 1][n - 1] = bk

def make_L(n):
    for i in range(n):
        L[i][0] = L[n - 1][i] = c

def make_A(n):
    for i in range(n):
        A[i][0] = A[0][i] = A[i][n - 1] = A[(n - 1) // 2][i] = c

def solve():
    init()

    n = int(input())
    make_U(n)
    make_D(n)
    make_L(n)
    make_A(n)

    for i in range(n):
        for j in range(n):
            print(U[i][j], end='')
        print(' ', end='')
        
        for j in range(n):
            print(D[i][j], end='')
        print(' ', end='')

        for j in range(n):
            print(L[i][j], end='')
        print(' ', end='')

        for j in range(n):
            print(A[i][j], end='')
        print()
        
    print("")



def main():
    t = int(input())
    for _ in range(t):
        solve()
    
    

if __name__ == "__main__":
    main()
