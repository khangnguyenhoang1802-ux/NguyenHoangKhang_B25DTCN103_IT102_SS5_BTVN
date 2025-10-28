#include <stdio.h>
int main(){
	char kyTu;
	printf("Nhap vao mot ky tu duy nhat: ");
	scanf("%c", &kyTu);
	
	if(kyTu >= 'a' && kyTu <= 'z'){
		printf("\nChu hoa tuong ung la: %c", kyTu - 32);
	}
	else if(kyTu >= 'A' && kyTu <= 'Z'){
		printf("\nChu thuong tuong ung la: %c", kyTu + 32);
	}
	else{
		printf("\nKhong phai la chu cai");
	}
	
	return 0;

}

