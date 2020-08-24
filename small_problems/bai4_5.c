#include <stdio.h> 
#include <stdbool.h>
void bai4_5(int nam, int thang){
    bool nhuan = false;
    if(nam%4 == 0){
        nhuan = true;
        if(nam%100 == 0 && nam%400 != 0){
            nhuan = false;
        }
    }
    if (thang == 4 || thang == 6 || thang == 9|| thang ==11){
        printf("30 ngay");
    }
    else if(thang == 2){
        if(nhuan == true){
            printf("29 ngay");
        }
        else{
            printf("28 ngay");
        }
    }
    else{
        printf("31 ngay");
    }
}