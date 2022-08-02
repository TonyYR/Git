# カードを足し合わせた時の動的計画法
import numpy as np
N,S = map(int,input().split())
A=[0]
for i in range(N):
    A.append(int(input()))

dp=np.zeros((N+1,S+1),dtype=bool)
dp[0][0] = True

for i in range(1,N +1):
    for j in range(0,S+1):
        if j < A[i]:
            dp[i][j] = dp[i-1][j]
        else:
            if dp[i-1][j] == True or dp[i-1][j-A[i]] == True:
                dp[i][j] = True
                print(i+j+dp[i][j])
            else:
                dp[i][j] = False

print(dp[i][S])