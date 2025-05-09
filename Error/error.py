def solve():
    x = int(input())
    s = str(input())

    for i in range (0,len(s), x):
        print(s[i], end='')
        
        
        
n = int(input())

for i in range(n):
    solve()
    print()