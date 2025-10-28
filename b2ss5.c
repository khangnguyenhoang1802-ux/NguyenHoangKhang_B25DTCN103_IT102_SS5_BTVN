#include <stdio.h>
int main(){
	float a, b, x;
	
	printf("Nhap vao so thuc a: ");
	scanf("%f", &a);
	printf("Nhap vao so thuc b: ");
	scanf("%f", &b);
	
	if(a==0 && b==0){
		printf("Phuong trinh vo so nghiem");
	}else if(a==0 && b!=0){
		printf("\nPhuong trinh vo nghiem");
	}else{
		x = -b / a;
		printf("Phuong trinh co nghiem duy nhat x = %.2f ", x);
	}
	
	return 0;
}
