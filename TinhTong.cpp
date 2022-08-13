#include<stdio.h>
#include<math.h>
int tong(){
    int a,b;
    scanf("%d%d",&a,&b);
    long long c =a+b;
    printf("%d",c);
    return 0;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        tong();
    }return 0;
}