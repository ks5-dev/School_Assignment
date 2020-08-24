#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

void bai4_3(int x, int y, int z){
    if(x*x == y*y+z*z || y*y == x*x+z*z || z*z == x*x +y*y){ // đ/lí py-ta-go
        printf("tam giac vuong");       
    }
    else if(x==y || y == z|| x == z){
        printf("tam giac can");
    }
    else{
        printf("tam giac thuong");
    }
}