#include<stdio.h>
#include<math.h>
void bailam(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<11;i++){
        long long s = a*i;
        printf("%d\t",s);
    }
}int main(){
    bailam();
    return 0;
}