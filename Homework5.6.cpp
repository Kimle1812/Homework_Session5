#include<stdio.h>
int main(){
	float a, b, c;
	int i; 
	do {
		printf("CALCULATOR\n");
		printf("1.Tong hai so\n");
		printf("2.Hieu hai so\n");
		printf("3.Tich hai so\n");
		printf("4.Thuong hai so\n");
		printf("5.Thoat\n");
		printf("Lua chon cua ban la: ");
		scanf("%d", &i);
		switch(i) {
			case 1:
				printf("Moi ban nhap so thu nhat: ");
		        scanf("%f", &a);
		        printf("Moi ban nhap so thu hai: ");
		        scanf("%f", &b);
				c = a + b;
				printf("Ket qua cua phep tinh là : %.2f\n", c);
				break;
			case 2:
				printf("Moi ban nhap so thu nhat: ");
		        scanf("%f", &a);
		        printf("Moi ban nhap so thu hai: ");
		        scanf("%f", &b);
				c = a - b;
				printf("Ket qua cua phep tinh là : %.2f\n", c);
				break;
			case 3:
				printf("Moi ban nhap so thu nhat: ");
		        scanf("%f", &a);
		        printf("Moi ban nhap so thu hai: ");
		        scanf("%f", &b);
				c = a * b;
				printf("Ket qua cua phep tinh là : %.2f\n", c);
				break;
			case 4:
				printf("Moi ban nhap so thu nhat: ");
		        scanf("%f", &a);
		        printf("Moi ban nhap so thu hai: ");
		        scanf("%f", &b);
		        if(b == 0 || a == 0){
		        	printf("Phep chia khong chia duoc cho 0\n");
				} else {
					c = a / b;
				    printf("Ket qua cua phep tinh là : %.2f\n", c);
				}
				break;
			case 5:
				printf("Thoat chuong trinh\n");
				break;
			default:
				printf("So nhap khong hop le\n");
		}
	} while ( i != 5 );
	return 0; 	
}
