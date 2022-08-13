#include<stdio.h>
void hinhvuong(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("*");
        }printf("\n");
    }
}int main(){
    hinhvuong();
    return 0;
}