#include <stdio.h>
void bai5_6(int n){
    int b;
    int ket_qua = 0;
    if( n %2 ==0){
        b = n-1;
    }
    else if (n%2 != 0)
    {
        b = n;
    }
    for(int i = 1; i<= b; i+=2){
        ket_qua += i*i;
    }
    printf("%d", ket_qua);
}