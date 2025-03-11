#include <stdio.h>

int main(void) {
    int kenar1,kenar2;
    printf("Kenar 1'in uzunluğunu girin: \n");
    scanf("%d",&kenar1);
    printf("Kenar 2'nin uzunluğunu girin: \n");
    scanf("%d",&kenar2);
    printf("Dikdörtgen alanı: %d",kenar1*kenar2);
    return 0;
}
