#3.7.2
N = int(input())
dp = []
for i in range(0,N):
    if i <= 1: dp.append(1)
    else : dp.append(dp[i-1] + dp[i-2])
print(dp[N-1])