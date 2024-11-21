#include<stdio.h>

int main(){
	int sum = 0;
	int number;
	printf("Nhap so nguyen co 4 chu so : ");
	scanf("%d" , &number);
	while(number > 0){
		sum += number % 10;
		number /= 10;
	}
	printf("Tong cua 4 chu so la : %d \n" , sum);
	return 0;
}
