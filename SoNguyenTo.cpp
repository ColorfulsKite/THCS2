#include<stdio.h>
#include<math.h>
int checknt(int n){
    if(n<2)return 0;
    if(n==2)return 1;
    if(n%2==0)return 0;
    for(int i=3;i<=sqrt(n);i+=2){
        if(n%i==0)  return 0;
    }return 1;
}
void bailam(){
    int n;
    scanf("%d",&n);
    if(checknt(n)) printf("YES\n");
    else    printf("NO\n");
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        bailam();
    }return 0;
}