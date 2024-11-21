#include<stdio.h>

int main(){
	float side , height;
	printf("Nhap do dai canh tam giac : ");
	scanf("%f" , &side);
	fflush(stdin);
	printf("Nhap chieu cao cua tam giac : ");
	scanf("%f" , &height);
	fflush(stdin);
	printf("Dien tich tam giac la : %.2f" , side*height/2);
	return 0;
}
