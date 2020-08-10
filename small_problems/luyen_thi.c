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
//bai4_1(4,7) trả về false còn (4,8) là true


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
//bai4_3(3,4,5)

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
//bai4_4("Le Trung Kien",10, 10,9);

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
//bai4_6(a)

void bai5_1(int n){
    int i;
    for( i = 1; i <= n/2; i++){
        if(n % i == 0){
            printf("%d", i);
            printf("\n");
        }
        printf("%d",n); // một số nguyên dương bất kỳ nhận chính nó làm ước 
    }
}

void bai5_2(){
    int input;
    int ket_qua = 0;
    scanf("%d", &input);
    for(int i =0; i <= input; i++){
        ket_qua += i;
    }
    printf("%d", ket_qua);
}
//bai5_2();

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

void bai5_5(){
    int input;
    int ketqua = 0;
    scanf("%d", &input);
    for(int i =0; i <= input ; i++){
        ketqua += i*i;
    }
    printf("%d", ketqua); //input 10 đc 385
}

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

void bai5_11(int n){
    int so = 0;
    while (n != 0)
    {
        n /= 10;
        so +=1 ; // mỗi lần chia được cho 10 kết quả cộng 1
    }
    printf("%d", so);
    
}

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

void bai5_14(int n){
    int i, k = 0;
    for (i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            k = 1;
            break;
        }
    }
    
    if (k == 0 && n !=1)
        printf("so nguyen to");
    else
        printf("ko phai so nguyen to");
}
 

int main(){
    return 0;
}