N = int(input())
H = []
for i in range(0,N):
    H.append(int(input()))

dp = []

for i in range (0,N):
    if i == 0:
        dp.append (0)
    elif i == 1:
        dp.append(abs(H[i-1] - H[i]))
    elif i >= 2:
        A = dp[i-2] + abs(H[i-2] - H[i])
        B = dp[i-1] + abs(H[i-1] - H[i])
        dp.append(min(A,B))

print(dp[N -1])

# Listのindexが分かりにくい。i = 1からにして、Indexを合わせる技術がまだない。
