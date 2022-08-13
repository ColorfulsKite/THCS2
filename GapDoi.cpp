#include<stdio.h>
#include<math.h>
int nd(){
    unsigned int a;
    scanf("%d",&a);
   unsigned long long b = (unsigned long long) a*a;
    printf("%d\n",b);
    return 0;
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        nd();
    }
    return 0;
}