#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Yêu c?u ngu?i dùng nh?p vào 3 s? nguyên
    printf("Nh?p vào s? nguyên th? nh?t: ");
    scanf("%d", &num1);

    printf("Nh?p vào s? nguyên th? hai: ");
    scanf("%d", &num2);

    printf("Nh?p vào s? nguyên th? ba: ");
    scanf("%d", &num3);

    // Ki?m tra xem s? th? ba có n?m trong kho?ng gi?a s? th? nh?t và s? th? hai không
    if ((num3 > num1 && num3 < num2) || (num3 > num2 && num3 < num1)) {
        printf("%d n?m trong kho?ng gi?a %d và %d\n", num3, num1, num2);
    } else {
        printf("%d không n?m trong kho?ng gi?a %d và %d\n", num3, num1, num2);
    }

    return 0;
}

