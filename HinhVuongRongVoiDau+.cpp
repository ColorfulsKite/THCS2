#include<stdio.h>
void hinhvuong(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||i==n-1||j==0||j==n-1){
                printf("*",n);
            }else
            printf(".",n);
        }printf("\n");
    }
}
int main(){
    hinhvuong();
    return 0;
}