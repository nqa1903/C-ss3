#include<stdio.h>

int main(){
	float math , liter , eng ;
	printf("Nhap diem toan : ");
	scanf("%f" , &math);
	printf("Nhap diem van : ");
	scanf("%f" , &liter);
	printf("Nhap diem tieng anh : ");
	scanf("%f" , &eng);
	printf("Tong diem 3 mon : %.2f \n" , math+liter+eng);
	printf("Diem trung binh 3 mon la : %.2f \n" , (math+liter+eng)/3);
	return 0;
}
