#include <stdio.h>

int main() {
    int array[8] = {77, 12, 74, 34, 56, 78, 234, 678};
    int i;
    printf("Индекс: |0 |1 |2 |3 | 4| 5|  6|  7|\n");
    printf("Элемент:|");
    for (i=0; i<8; i++){
        printf("%d|", array[i]);
    }
    return 0;
}