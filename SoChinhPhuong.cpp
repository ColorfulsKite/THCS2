#include<stdio.h>
#include<math.h>
int sochinhphuong(int n){
    int temp=(int) sqrt(n);
    if(temp*temp==n)
        return 1;
        else
            return 0;
}void bailam(){
    int n,i;
    scanf("%d",&n);
    if(sochinhphuong(n))
        printf("YES\n");
        else    
            printf("NO\n");
}int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        bailam();
    }return 0;
}