#include<stdio.h>
#include<math.h>
int ucln(int a, int b){
    while(a!=b){
        if(a>b) a-=b;
        else    b-=a;
    }return a;
}
void bailam(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d\n",ucln(a,b));
}int main(){
    int t; scanf("%d",&t);
    while(t--){
        bailam();
    }return 0;
}