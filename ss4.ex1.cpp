#include <stdio.h>

int main() {
    int num;

    // Yêu c?u ngu?i dùng nh?p vào m?t s? nguyên
    printf("Nh?p vào m?t s? nguyên: ");
    scanf("%d", &num);

    // Ki?m tra xem s? dó là s? âm hay s? duong
    if (num > 0) {
        printf("%d là s? duong\n", num);
    } else if (num < 0) {
        printf("%d là s? âm\n", num);
    } else {
        printf("%d là s? không\n", num);
    }

    return 0;
}

