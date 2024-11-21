#include<stdio.h>

int main(){
	int number;
	int reverse = 0;
	printf("Nhap so nguyen co 4 chu so : ");
	scanf("%d",&number);
	while(number > 0){
		reverse = reverse * 10 + (number % 10);
		number /= 10;
	}
	printf("So dao nguoc la : %d" ,reverse);
	return 0;
}
