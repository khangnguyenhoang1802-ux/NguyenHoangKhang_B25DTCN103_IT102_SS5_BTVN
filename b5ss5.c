#include <stdio.h>
int main(){
    int a;
    float b = 20000;
    float c;

    printf("Nhap tuoi hanh khach: ");
    scanf("%d", &a);

    if (a < 0 || a > 120){
        printf("\nTuoi khong hop le");
    } 
    else if(a < 6){
        c = 0;
        printf("\nSo tien ve: %.0f VND", c);
    }else if(a <= 18){
        c = b * 0.5;
        printf("\nSo tien ve: %.0f VND", c);
    }else if(a <= 60){
        c = b * 1.0;
        printf("\nSo tien ve: %.0f VND", c);
    }else{
        c = b * 0.7;
        printf("\nSo tien ve: %.0f VND", c);
    }

    return 0;
}

