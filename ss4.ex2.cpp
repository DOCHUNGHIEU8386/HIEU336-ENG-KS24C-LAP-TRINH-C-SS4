#include <stdio.h>

int main() {
    int num;

    // Yêu c?u ngu?i dùng nh?p vào m?t s? nguyên
    printf("Nh?p vào m?t s? nguyên: ");
    scanf("%d", &num);

    // Ki?m tra xem s? dó là s? ch?n hay s? l?
    if (num % 2 == 0) {
        printf("%d là s? ch?n\n", num);
    } else {
        printf("%d là s? l?\n", num);
    }

    return 0;
}

