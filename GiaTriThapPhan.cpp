#include<stdio.h>
#include<math.h>
void stp(){
    int a;
    scanf("%d",&a);
    printf("%.15f",(double)1/a);
}int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        stp();
    }return 0;}