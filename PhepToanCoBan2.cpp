#include<stdio.h>
#include<math.h>
void bailam(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(b==0){
        printf("%d",0);
        return;
    }
    printf("%d\n%d\n%lld\n%d\n%d\n%.2f\n", a + b, a - b,(long long) a * b, a/b, a%b, (float) a/b);
}int main(){
    // int t;
    // scanf("%d",&t);
    // while(t--){
        bailam();
    // }
    return 0;
}