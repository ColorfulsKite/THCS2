#include<stdio.h>
#include<string.h>

char so_lon[1005], so_be[1005];

// so sung so 0 o dau "SO BE"
void bo_sung_sobe(){
	int len1 = strlen(so_lon), len2 = strlen(so_be),i,j;
	char temp[1005]; 
	for(i = 0; i < len1 - len2; i++){
		temp[i] = 48;
	}
	for(j = len1 - len2, i = 0; i < len2; i++,j++){
		temp[j] = so_be[i];
	}
//	strcat(temp, so_be);
	strcpy(so_be, temp);
}

// tim xem so nao la "SO LON", so nao la "SO BE"
void update(char s1[1005], char s2[1005]){
	int len1 = strlen(s1), len2 = strlen(s2);
	int check = 0;
	
	if(len1 > len2){
		strcpy(so_lon, s1);
		strcpy(so_be, s2);
		check = 1;
	} else if(len1 < len2){
		strcpy(so_be, s1);
		strcpy(so_lon, s2);
		check = 1;
	} else{
		int i;
		for(i = 0; i < len1; i++){
			int so_s1 = (int) s1[i] - 48;
			int so_s2 = (int) s2[i] - 48;
			if(so_s1 > so_s2){
				strcpy(so_lon, s1);
				strcpy(so_be, s2);
			} else{
				strcpy(so_be, s1);
				strcpy(so_lon, s2);
			}
		}
	}
	
	if(check) bo_sung_sobe();
}

void tinh_hieu(char s1[1005], char s2[1005]){
	update(s1, s2); //tim so_be, so_lon
	
	// tinh hieu
	int len = strlen(so_lon);
	int kq[len]; memset(kq, 0, sizeof(kq));
	int i, nho = 0;
	for(i = len - 1; i >= 0; i--){
		int a = (int) so_lon[i] - 48; 
		int b = (int) so_be[i] - 48;
		if(nho != 0){
			b++;
			nho = 0;
		}
		if(a >= b) kq[i] = a - b;
		else {
			kq[i] = a + 10 - b;
			nho = 1;
		}
	}
	
	// loai so 0 o dau 
	int index = 0;
	while(kq[index] == 0 && index < len - 1) index++;
	
	// in dap an
	for(i = index; i < len; i++){
		printf("%d", kq[i]);
	}
	printf("\n");
}

void bai_lam(){
	char s1[1005], s2[1005];
	int i,j;
	gets(s1); gets(s2);
	
	tinh_hieu(s1, s2);
}

int main(){
	int a; scanf("%d", &a); getchar();
	while(a--){
		bai_lam();
	}
}