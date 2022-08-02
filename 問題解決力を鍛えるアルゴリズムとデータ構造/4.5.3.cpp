
#include <iostream>
#include <vector>
#include <queue>

using namespace std;
int N, M, A[100009], B[100009];
int dist[100009];
vector<int> G[100009];

int Main()
{
    cin >> N >> M;
    for (int i = 1; i <= M; i++)
    {
        cin >> A[i] >> B[i];
        G[A[i]].push_back(B[i]);
        G[B[i]].push_back(A[i]);
    }

    // 幅優先検索の初期化(dist[1]= -1)の時、未到達の白色頂点
    for (int i = 0; i <= N; i++)
        dist[i] = -1;
    queue<int> Q;

    Q.push(1).dist[1] = 0;

    // 幅優先検索
    while (!Q.empty())
    {
        int pos = Q.front(); // Qの先頭を調べる
        Q.pop();
        for (int i = 0; i < (int)G[pos].size(); i++)
        {
            int nex = G[pos][i];
            if (dist[nex] == -1)
            {
                dist[nex] = dist[pos] + 1;
                Q.push(nex);
            }
        }
    }
    for (int i = 0; i <= N; i++)
        cout << dist[i] << endl;
    return 0;
}
