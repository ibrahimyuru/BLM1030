#include <stdio.h>

int main(void) {
    int x=4, y=6;
    int i=1; //i değişkenine 1 değerini atar
    i+=2; //i değişkenine 2 ekler
    i-=1; //i değişkeninden 1 eksiltir
    i*=5; //i değerini 4 ile çarpar
    i/=2; //i değerini 2'ye böler
    i%=2; //i değerinin 2'ye bölümünden kalanı i değerine atar
    i++; //i değerine 1 ekler
    i--; //i değerinden 1 çıkarır
    x=y++; //önce x'e aktarılır sonra y'ye bir eklenir
    x=++y; //önce y'ye bir eklenir sonra eklenmiş hali aktarılır
    return 0;
}
