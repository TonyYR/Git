
#include <iostream>
#include <algorithm>
using namespace std;

int N depth = 0;
string S;

int main()
{
    cin >> N >> S;
    // 途中でdepthが負になったらその時点で終了
    for (int i = 0; i < N; i++)
    {
        if (s[i] == '(')
            depth += 1;
        if (s[i] == ')')
            depth -= 1;
        if (depth < 0)
        {
            cout << "No" << endl;
            return 0;
        }
    }
}