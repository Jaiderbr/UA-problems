import math
import sys
input = sys.stdin.readline
write = sys.stdout.write

def fast_print(x): write(str(x) + '\n')

def main():
    t = int(input())
    
    for _ in range(t):
        n = int(input())
        
        s, p ="",0

        for _ in range(n):
            S, x = input().split() 
            x = int(x)

            if x > p:
                p = x
                s = S

        print(s , p)

    


if __name__ == '__main__':
    main()