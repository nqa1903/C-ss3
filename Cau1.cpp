#include<stdio.h>

int main(){
	char name[15];
	printf("Nhap ten nguoi dung : ");
	fgets(name , sizeof(name) , stdin);
	fflush(stdin);
	printf("Hello %s \n" , name);
	return 0;
}
