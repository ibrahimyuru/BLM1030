#include <stdio.h>

int main(void) {
    int sayi;
    float pi;
    char harf;

    printf("Bir sayı girin: ");
    scanf("%d", &sayi);

    printf("Bir pi sayısı girin: ");
    scanf("%f", &pi);

    printf("Bir harf girin: ");
    scanf(" %c", &harf); //boşluk!!!

    printf("Girdiniz sayı: %d\n", sayi);
    printf("Girdiniz sayı: %5d\n", sayi);
    printf("Girdiniz pi sayısı: %f\n", pi);
    printf("Girdiniz pi sayısı: %.2f\n", pi);
    printf("Girdiniz harf: %c\n", harf);
    return 0;
}
