#include<stdio.h>
#include<math.h>
void bailam(){
    int a;
    scanf("%d",&a);
    long long S =0;
    while(a!=0){
        S+=a%10;
        a/=10;
    }printf("%d",S); 
}int main(){
    bailam();
    return 0;
}