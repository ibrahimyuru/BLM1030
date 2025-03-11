#include <stdio.h>

int main(void) {
    int a=2, b=10, c=50;
    float f=1.05, g=25.5, h=-0.1,yuzde;

    printf("3 tam sayı : %d,%d,%d\n", a, b, c);
    printf("3 tam sayı [TAB]: %d \t%d \t%d\n", a, b, c);
    printf("\n");
    printf("3 reel sayı (yan yana): %f %f %f\n", f, g, h);
    printf("3 reel sayı (alt alta): \n%f \n%f \n%f\n\n", f, g, h);

    yuzde = 220*25/100.0;
    printf("220'nin %%25'i %f'dir\n", yuzde);
    printf("%f/%f işleminin sonucu: %f", g,h,g/h);
}
