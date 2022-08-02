#include <iostream>
using namespace std;

int H, W, A[2009][2009];
int gyou[2009];
int retu[2009];
int answer[2009][2009];

int main()
{

    cin >> H >> W;
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cin >> A[i][j];
        }
    }

    // 行の総和を計算する
    for (int i = 0; i < H; i++)
    {
        gyou[i] = 0 for (int j = 0; j < W; j++) { gyou[i] += A[i][j] }
    }

    // 列の総和を計算する
    for (int i = 0; i < W; i++)
    {
        retu[i] = 0 for (int j = 0; j < H; j++) { retu[i] += A[j][i] }
    }

    // 解を計算する
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            answer[i][j] = gyou[i] + retu[j] - A[i][j];
        }
    }
    // 出力
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (j >= 2)
                cout << " ";
            cout << answer[i][j];
        }
    }
    cout << endl;
}