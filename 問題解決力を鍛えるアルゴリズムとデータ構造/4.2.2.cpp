#include <iostream>
using namespace std;
int main(void){
    // Your code here!
    int N, A[10009], B[10009];
    int Q, L[10009], R[10009];
    
    int main()
    {
        cin >> N >> Q;
        for(int i = 1, i <= N; i++) cin >> A[i];
        for(int j = 1, j <= Q; j++) cin >> L[j] >> R[j];
        B[0] = 0
        for( int i = 0; i <= N; i ++) B[i] = B[i -1] + A[i] // 累積話を求める
        for(int j = 1; j <= Q; j ++) cout << B[R[j]] - B[L[j] -1] << endl;
    endl:
        return 0;
    }
}
