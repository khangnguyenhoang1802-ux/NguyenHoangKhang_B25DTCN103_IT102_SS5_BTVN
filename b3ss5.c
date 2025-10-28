#include <stdio.h>
int main(){
	float a;
	
	printf("Nhap vao diem trung binh (0-10): ");
	scanf("%f", &a);
	
	if(a<0 || a>10){
		printf("\nDiem khong hop le");
	}else if(a>=8){
		printf("\nHoc luc gioi");
	}else if(a>=6.5){
		printf("\nHoc luc kha");
	}else if(a>=5){
		printf("\nHoc luc trung binh");
	}else{
		printf("\nHoc luc yeu");
	}

	return 0;
}
