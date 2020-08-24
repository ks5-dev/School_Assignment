#include <stdio.h>
void bai5_14(int n){
    int i, k = 0;
    for (i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            k = 1;
            break;
        }
    }
    
    if (k == 0 && n !=1)
        printf("so nguyen to");
    else
        printf("ko phai so nguyen to");
}