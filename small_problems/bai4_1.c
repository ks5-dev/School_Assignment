#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool bai4_1(int x, int y){
    if(x%y == 0 || y%x == 0){ // kiểm tra điều kiện x : y hoặc y:x có dư không
        return true;
    }
    else{
        return false;
    }
}