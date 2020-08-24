#include <stdio.h>
void bai4_4(char ten[] , int dt, int dv,int da ){
    printf(ten);
    printf("\n");
    int dtb = (dt+dv+da)/3;
    printf("diem trung binh la %d ", dtb);
    printf("\n");
    if(dtb >= 9){
        printf("Hoc sinh gioi" );
    }
    else if(9 > dtb >= 7){
        printf("hoc sinh kha");
    }
    else if(7 > dtb >= 5){
        printf("hoc sinh yeu");
    }
    else if(5>dtb){
        printf("hoc sinh trung binh");
    }
}