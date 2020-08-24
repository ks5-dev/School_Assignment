#include <stdio.h>
void bai4_6(char kytu){
    if(kytu >= 'a' && kytu <= 'z'){
        char ketqua = toupper(kytu);
        printf("%c",ketqua);
    }
    else if(kytu >= 'A' && kytu <= 'Z'){
        char ketqua = tolower(kytu);
        printf("%c",ketqua);
    }
    else{
        printf("%c",kytu);
    }
}