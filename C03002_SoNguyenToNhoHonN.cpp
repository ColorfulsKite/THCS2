#include<stdio.h>
#include<math.h>
#include<string.h>

int isPrime(int n){
	if(n < 2) return 0;
	if(n == 2) return 1;
	if(n % 2 == 0) return 0;
	int i;
	for(i = 3; i <= sqrt(n); i += 2){
		if(n%i == 0) return 0;
	}
	return 1;
}

void bai_lam(){
	int n,i;
	scanf("%d", &n);
	for(i = 2; i < n; i++){
		if(isPrime(i)) printf("%d\n", i);
	}
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}
