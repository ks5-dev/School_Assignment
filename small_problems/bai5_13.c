#include <stdio.h>
void bai5_13(int a, int b){
    int max;
    if(a==b){
        max = a;
        printf("Uoc chung lon nhat %d ", max );
    }
    else
    {
        for(int i = 1; i <= a/2; i++){
            if(a%i == 0 && b%i == 0){
                max = i; // vòng lặp cuối cùng luôn trả về số lớn nhất
            }
        }
    }
    printf("%d", max);
    //bai5_13(8,12) ==> 4
}