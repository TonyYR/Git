#include <iostream>
using namespace std;

int N, T;
    int L[500009],R[500009];
    int A[500009],B[500009];

int main(void){
    // Your code here!
        cin >> T >> N;
        for(int i = 0; i <= N; i ++) cin >> L[i] >> R[i];
        
        // 階差を計算する
        for(int i = 0; i<= T; i ++)
        {
            B[i] = 0;
        }
        
        for(int i = 0; i<= N; i ++)
        {
            B[L[i]] += 1;
            B[R[i]] -= 1;
        }
        
        // 累積和の計算
        A[0] = B[0];
        for (int i = 1; i <= T; i++)
        {
            A[i] = A[i-1] + B[i];
        }
        for(int i = 0; i < T; i++) cout << A[i] << endl; 
    }
}
