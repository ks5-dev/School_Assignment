#include <stdio.h>
void bai5_5(){
    int input;
    int ketqua = 0;
    scanf("%d", &input);
    for(int i =0; i <= input ; i++){
        ketqua += i*i;
    }
    printf("%d", ketqua); //input 10 đc 385
}
