import math
import sys
input = sys.stdin.readline
write = sys.stdout.write
def fast_print(x): write(str(x) + '\n')

def main():    
        
    for _ in range(int(input())):
        n = int(input())
        ans = 0
        mm, mx = (10000000, "") , (-10000000, "") 
        
        for _ in range(n):
            time, s = input().split()
            time = int(time)            
            ans += time
            if time < mm[0]: mm = (time, s)
            if time > mx[0]: mx = (time, s)
        
        fast_print("Total: " + str(ans))
        fast_print("Mas dedicado: " + mx[1])
        fast_print("Menos dedicado: " + mm[1])

if __name__ == '__main__':
    main()