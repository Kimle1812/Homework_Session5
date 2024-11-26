#include<stdio.h>
int main(){
	int i, number, nhan ;
	printf("Moi ban nhap mot so nguyen tu 1 den 10:");
	scanf("%d", &i);
	for(int number = 1; number <= 10; ++number ){
		nhan = number * i; 
		printf("%d * %d = %d\n", i, number, nhan);
	}
	
	return 0; 
}
