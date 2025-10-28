#include <stdio.h>
int main(){
	float a, b, ketqua;
	char toanTu;
	printf("Nhap vao so thuc a: ");
	scanf("%f", &a);
	printf("Nhap vao so thuc b: ");
	scanf("%f", &b);
	printf("Nhap vao mot toan tu: ");
	fflush(stdin);
	scanf("%c", &toanTu);
	
	switch(toanTu){
		case '+':
			ketqua = a + b;
			printf("\nKet qua: %.2f + %.2f = %.2f", a, b, ketqua);
			break;
		case '-':
			ketqua = a - b;
			printf("\nKet qua: %.2f - %.2f = %.2f", a, b, ketqua);
			break;
		case '*':
			ketqua = a * b;
			printf("\nKet qua: %.2f * %.2f = %.2f", a, b, ketqua);
			break;
		case '/':
			ketqua = a / b;
			if(b == 0){
				printf("\nLoi: Khong the chia cho 0");
			}
			else{
			printf("\nKet qua: %.2f / %.2f = %.2f", a, b, ketqua);	
			}
			break;
		default:
			printf("\nLoi: Toan tu khong hop le");
	}
	                                                                                                                                                                                 
	return 0;
}
