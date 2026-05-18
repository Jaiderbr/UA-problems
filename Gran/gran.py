import math
import sys
input = sys.stdin.readline
write = sys.stdout.write

def fast_print(x): write(str(x) + '\n')

def main():
    t = int(input())
    
    for _ in range(t):
        n = int(input())
        mp = {}

        for _ in range(n):
            s, x = input().split() 
            x = int(x)
            if x not in mp:
                mp[x] = []
            mp[x].append(s)

        ya = False

        for k in sorted(mp):
            if len(mp[k]) == 1:
                fast_print(mp[k][0])
                ya = True
                break

        if not ya:            
            fast_print(mp[min(mp)][0])

if __name__ == '__main__':
    main()