#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Y�u c?u ngu?i d�ng nh?p v�o 3 s? nguy�n
    printf("Nh?p v�o s? nguy�n th? nh?t: ");
    scanf("%d", &num1);

    printf("Nh?p v�o s? nguy�n th? hai: ");
    scanf("%d", &num2);

    printf("Nh?p v�o s? nguy�n th? ba: ");
    scanf("%d", &num3);

    // Ki?m tra xem s? th? ba c� n?m trong kho?ng gi?a s? th? nh?t v� s? th? hai kh�ng
    if ((num3 > num1 && num3 < num2) || (num3 > num2 && num3 < num1)) {
        printf("%d n?m trong kho?ng gi?a %d v� %d\n", num3, num1, num2);
    } else {
        printf("%d kh�ng n?m trong kho?ng gi?a %d v� %d\n", num3, num1, num2);
    }

    return 0;
}

