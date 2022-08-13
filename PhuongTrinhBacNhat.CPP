#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
void bacnhat(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a==0&&b!=0)
        printf("Vo nghiem");
    else if(a==0 && b==0)
        printf("Vo so nghiem");
        else
        printf("%.2f",(float)-b/a);    
}int main(){
    // int t;
    // scanf("%d",&t);
    // while(t--){
        bacnhat();
    // }
return 0;
}