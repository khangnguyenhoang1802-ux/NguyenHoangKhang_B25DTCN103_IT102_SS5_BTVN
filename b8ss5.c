#include <stdio.h>
int main(){
	float a, tongTien;
	
	printf("Nhap vao so met khoi (m^3) nuoc tieu thu: ");
	scanf("%f", &a);
	
	if(a < 0){
		printf("Nhap sai dinh dang");
	}else if(a <= 10){
		tongTien = a * 6000;
	}
	else if(a <= 20){
		tongTien = 10 * 6000 + (a - 10) * 7000;
	}
	else if(a <= 30){
		tongTien = 10 * 6000 + 10 * 7000 + (a - 20) * 8500;
	}
	else{
		tongTien = 10 * 6000 + 10 * 7000 + 10 * 8500 + (a - 30) * 10000;
	}

	printf("\nSo tien phai tra la: %.0f VND", tongTien);
	
	return 0;
}

