#include<stdio.h>

void hcn(int n, int m){
    for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(i == 0 || i == m - 1 || j == 0 || j == n -1){
            printf("*");}
            else
            printf(" ");
        }
        printf("\n");
    }
}int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    hcn(n,m);
    return 0;
}