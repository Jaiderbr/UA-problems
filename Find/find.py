import math
import sys
input = sys.stdin.readline
write = sys.stdout.write
def fast_print(x): write(str(x) + '\n')

def main():    
    
    for i in range(int(input())): fast_print(bin(int(input()))[2:])
        

if __name__ == '__main__':
    main()