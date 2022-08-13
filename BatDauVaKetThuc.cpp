#include<stdio.h>
void bailam(){
    int n, a1, a2;
    scanf("%d",&n);
    a1 = n%10;
    while(n!=0){
        a2 = n%10;
        n /=10;
    }if(a1==a2)  printf("YES\n");
    else        printf("NO\n");
}int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        bailam();
    }return 0;
}