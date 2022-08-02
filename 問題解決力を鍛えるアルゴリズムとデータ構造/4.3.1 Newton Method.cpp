#include <iostream>
using namespace std;

int main(void){
    // Your code here!
    double  r = 2.0;
    double a = 2.0;
    
    for(int i =1; i <=5; i ++)
    {
        double zahyou_x = a;
        double zahyou_y = a*a;
        
        double sessen_a = 2.0*zahyou_x;
        double sessen_b = zahyou_y - sessen_a * zahyou_x;
        
        // 次のaのnext_aを求める
        double  next_a  = (r - sessen_b) / sessen_a;
        printf("Step #%d:a = %12lf -> %.12lf/n",i,a,next_a);
        a = next_a; 
    }
    return  0;
}
