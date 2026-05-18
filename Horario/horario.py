import math
import sys
input = sys.stdin.readline
write = sys.stdout.write
def fast_print(x): write(str(x) + '\n')

def main():
    n = int(input())
    a = []
    for i in range(n):
        x,y = map(int,input().split())
        a.append((y,x))
    
    a.sort()

    cnt, alt = 0 , 0
    for [f,i] in a:
        if i >=alt:
            cnt+=1
            alt = f

    fast_print(cnt)


if __name__ == '__main__':
    main()