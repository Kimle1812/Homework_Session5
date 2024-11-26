#include<stdio.h>
int main(){
	int i, table, number;
	for(int i = 1; i <= 10; ++i){
		printf("Bang cuu chuong so %d\n", i);
		for(int number = 1; number <= 10; ++ number){
			int table = number * i;
			printf("%d * %d = %d\n", i, number, table); 
		}
	}
	return 0; 
} 
