#include <stdio.h>

int main(){
	float cel , fah;
	printf("Nhap nhiet do theo do Celsius : ");
	scanf("%f" , &cel);
	fah = (cel * 9 / 5) + 32;
	printf("Nhiet do theo do Fahrenheit : %.2f \n",fah);
	return 0;
}
