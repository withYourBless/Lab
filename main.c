#include <stdio.h>
#include <math.h>

int main() {
    unsigned digit16;
    unsigned digit162;
    unsigned digit;
    unsigned OperationOr;
    printf("Введите число в шестнадцатиричной системе(начиная с 0х): ");
    scanf("%x", &digit16);
    printf("Число %X в восмиричной системе счисления: %o", digit16, digit16);
    printf("\nЧисло в 16-тиричной системе: %X", digit16);
    digit162 = digit16 << 2;
    printf("\n%X", digit162);
    printf("\n%X, %X", digit16, ~digit16);
    printf("\nВведите число в шестнадцатиричной системе(начиная с 0х): ");
    scanf("\n%x", digit);
    printf("%X", digit + digit16);

return 0;
}

// CAC8A8F