#include <stdio.h>

int main() {
    int num;

    // Y�u c?u ngu?i d�ng nh?p v�o m?t s? nguy�n
    printf("Nh?p v�o m?t s? nguy�n: ");
    scanf("%d", &num);

    // Ki?m tra xem s? d� l� s? �m hay s? duong
    if (num > 0) {
        printf("%d l� s? duong\n", num);
    } else if (num < 0) {
        printf("%d l� s? �m\n", num);
    } else {
        printf("%d l� s? kh�ng\n", num);
    }

    return 0;
}

