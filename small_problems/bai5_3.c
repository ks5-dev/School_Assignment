#include <stdio.h>
void bai5_3(){
    // kết quả trừ tổng các số lẻ và cộng tổng các số chẵn
    int input;
    int ket_qua = 0;
    int le = 0;
    scanf("%d", &input);
    if(input % 2 == 0){
        le = 0;
    }
    else{
        le = 1;
    }
    if(le == 1){
    for (int i = 1; i <= input ; i+= 2)
    {
        ket_qua -= i;
    }
    for (int i = 0; i <= input - 1; i+=2)
    {
        ket_qua += i;
    }
    }
    if(le == 0){    
        for(int i= 0; i <=input; i+=2){
            ket_qua += i;
        }
        for (int i = 1; i <= input; i+= 2)
        {
            ket_qua -= i;
        }
    }
    printf("%d", ket_qua);
    
}