#include <stdio.h>
void bai5_12(int n){
    int dao = 0;
    while (n != 0)
    {
        dao = dao*10 + n%10 ;
        n /= 10;
        /*
        số tận cùng là lấy số dư của n khi chia cho 10
        lặp số n liên tục để chia
        trong lúc đó kết quả nhân 10 + con số tận cùng        
        */
    }
    printf("%d", dao);
    }
//bai5_12(35566)