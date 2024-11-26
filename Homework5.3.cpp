#include<stdio.h>
int main(){
	int number;
	int n, sum;
	printf("Xin moi nhap mot so nguyen duong:");
	scanf("%d", &n); 
	for(int number = 0 ; number <= n ; ++ number){
		sum = sum + number;
	}
	printf("Tong cua day so tu 0 den %d là %d", n, sum); 
	return 0; 
}
