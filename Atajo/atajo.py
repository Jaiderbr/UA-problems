import heapq

def solve():
    n, m = map(int, input().split())
    a, b = map(int, input().split())
    a -= 1
    b -= 1

    g = [[] for _ in range(n)]
    for _ in range(m):
        u, v = map(int, input().split())
        u -= 1
        v -= 1
        g[u].append((v, 1))

    dist = [float('inf')] * n

    def dijkstra(start):
        pq = []
        heapq.heappush(pq, (0, start))
        dist[start] = 0

        while pq:
            d, v = heapq.heappop(pq)
            if d > dist[v]:
                continue
            for u, w in g[v]:
                if dist[u] > dist[v] + w:
                    dist[u] = dist[v] + w
                    heapq.heappush(pq, (dist[u], u))

    dijkstra(a)

    da = dist[b]
    if da == float('inf'):
        print(-1)
    else:
        print(da)

def main():
    testcase = int(input())
    for _ in range(testcase):
        solve()


if __name__ == "__main__":
    main()
