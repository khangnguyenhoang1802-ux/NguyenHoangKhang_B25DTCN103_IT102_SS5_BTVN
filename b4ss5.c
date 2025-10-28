#include <stdio.h>
int main(){
	float a, b, x;
	
	printf("Nhap vao muc thu nhap 1 thang: ");
	scanf("%f", &a);
	
	if(a<=5){
		b = 5;
	}else if(a<=10){
		b = 10;
	}else{
		b = 15;
	}x = a * (b / 100);
	printf("So tien thue thu nhap phai dong: %.2f", x);

	return 0;
}
