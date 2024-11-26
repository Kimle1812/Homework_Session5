#include<stdio.h>
int main(){
	int a, b, i;
	float n;
	do {
		printf("Moi ban nhap so thu nhat: ");
		scanf("%d", &a);
		printf("Moi ban nhap so thu hai: ");
		scanf("%d", &b);
		printf("CALCULATOR\n");
		printf("1.Tong hai so\n");
		printf("2.Hieu hai so\n");
		printf("3.Tich hai so\n");
		printf("4.Thuong hai so\n");
		printf("5.Thoat\n");
		printf("Lua chon cua ban la: ");
		scanf("%d", &i);
		switch(i){
		case 1:
			float n = a + b;
			printf("Ket qua cua phep tinh là : %.2f\n", n);
			break;
		case 2:
			float n = a - b;
			printf("Ket qua cua phep tinh là : %.2f\n", n);
			break;
		case 3:
			float n = a * b;
			printf("Ket qua cua phep tinh là : %.2f\n", n);
			break;
		case 4:
			float n = a / b;
			printf("Ket qua cua phep tinh là : %.2f\n", n);
			break;
		case 5:
			printf("Thoat chuong trinh\n");
			break;
		default:
			printf("So nhap khong hop le");
		
	} while ( i != 5);
	
	return 0; 
	
} 

