#include <stdio.h>

int main() {
    int num;

    // Y�u c?u ngu?i d�ng nh?p v�o m?t s? nguy�n
    printf("Nh?p v�o m?t s? nguy�n: ");
    scanf("%d", &num);

    // Ki?m tra xem s? d� l� s? ch?n hay s? l?
    if (num % 2 == 0) {
        printf("%d l� s? ch?n\n", num);
    } else {
        printf("%d l� s? l?\n", num);
    }

    return 0;
}

