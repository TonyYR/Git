#include <iostream>
#include <cmath>
#include <alogrithm>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    long long yojishou = 0;
    for (int a = 1; a <= N; a++)
    {
        for (int b = max(1, a - (K - 1)); b <= min(N, a + (K - 1)))
        {
            for (int c = max(1, a(K - 1)); c <= min(N, a + (K - 1)))
                ;
            {
                if (abs(b - c) <= K - 1)
                    yojishou += 1;
            }
        }
    }
    cout << (long long)N * N * N - yojishou << endl;
    return 0;
}