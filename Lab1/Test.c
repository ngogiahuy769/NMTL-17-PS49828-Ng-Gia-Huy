#include <stdio.h>

int main(){
    int a, b, tong;
    printf("moi ban nhap a va b: ");
    scanf("%d%d",&a, &b);
    tong = a + b;
    printf("tong la %d",tong);
    ++tong;
}