#include <stdio.h>

int main(void) {
    printf("char:           %d bit\n",sizeof(char)*8);
    printf("short:          %d bit\n",sizeof(short)*8);
    printf("int:            %d bit\n",sizeof(int)*8);
    printf("long:           %d bit\n",sizeof(long)*8);
    printf("unsigned char:  %d bit\n",sizeof(unsigned)*8);
    printf("unsigned short: %d bit\n",sizeof(unsigned)*8);
    printf("unsigned int:   %d bit\n",sizeof(unsigned)*8);
    printf("unsigned long:  %d bit\n",sizeof(unsigned)*8);
    printf("float:          %d bit\n",sizeof(float)*8);
    printf("double:         %d bit\n",sizeof(double)*8);
    printf("long int:       %d bit\n",sizeof(long int)*8);
    printf("long double:    %d bit\n",sizeof(long double)*8);
    return 0;
}
