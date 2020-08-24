#include <stdio.h>
void bai5_11(int n){
    int so = 0;
    while (n != 0)
    {
        n /= 10;
        so +=1 ; // mỗi lần chia được cho 10 kết quả cộng 1
    }
    printf("%d", so);
    
}