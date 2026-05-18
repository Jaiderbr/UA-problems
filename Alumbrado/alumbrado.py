import math
import sys
from collections import defaultdict, deque
from itertools import *
from functools import *

input = sys.stdin.readline
write = sys.stdout.write
def fast_print(x): write(str(x) + '\n')

class pt:
    def __init__(self, x=0, y=0):
        self.x = x
        self.y = y

    def __add__(self, p): return pt(self.x + p.x, self.y + p.y)
    def __sub__(self, p): return pt(self.x - p.x, self.y - p.y)
    def __mul__(self, other):
        if isinstance(other, pt): return self.x * other.x + self.y * other.y
        return pt(self.x * other, self.y * other)   
    def cross(self, p): return self.x * p.y - self.y * p.x
    def __lt__(self, p): return (self.x, self.y) < (p.x, p.y)
    def __eq__(self, p): return self.x == p.x and self.y == p.y
    def __repr__(self): return f"pt({self.x}, {self.y})"

def sq(x): return x * x
def dist2(p, q): return sq(p.x - q.x) + sq(p.y - q.y)
def sarea2(p, q, r): return (q - p).cross(r - q)
def col(p, q, r): return sarea2(p, q, r) == 0
def ccw(p, q, r): return sarea2(p, q, r) > 0
def quad(p): return (int(p.x < 0)) ^ (3 * int(p.y < 0))
def compare_angle(p, q):
    if quad(p) != quad(q): return quad(p) < quad(q)
    return ccw(q, pt(0, 0), p)

def isinseg(p, r): 
    a, b = r[0] - p, r[1] - p
    return a.cross(b) == 0 and a * b <= 0

def interseg(r, s): 
    if (isinseg(r[0], s) or isinseg(r[1], s) or isinseg(s[0], r) or isinseg(s[1], r)):
        return True
    return (ccw(r[0], r[1], s[0]) != ccw(r[0], r[1], s[1]) and ccw(s[0], s[1], r[0]) != ccw(s[0], s[1], r[1]))
def read_pt():
    x, y = map(int, input().split()) 
    return pt(x, y)
    
def solve():
    a,s,d,f = map(int, input().split())
    A, B = pt(a,s), pt(d,f)
    Q = read_pt() 
    P = read_pt()
    ff = (A, B)
    ss = (Q, P)
    fast_print("NO" if interseg(ff, ss) else "SI")

def main():
    t = int(input())
    for _ in range(t):
        solve()

if __name__ == '__main__':
    main()