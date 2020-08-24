#include <stdio.h>
void bai5_1(int n){
    int i;
    for( i = 1; i <= n/2; i++){
        if(n % i == 0){
            printf("%d", i);
            printf("\n");
        }
        printf("%d",n); // một số nguyên dương bất kỳ nhận chính nó làm ước 
    }
}