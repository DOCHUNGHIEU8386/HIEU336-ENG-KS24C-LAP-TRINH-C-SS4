#include <stdio.h>

int main() {
    int num;

    // Yêu c?u ngu?i dùng nh?p vào m?t s? nguyên
    printf("Nh?p vào m?t s? nguyên: ");
    scanf("%d", &num);

    // Ki?m tra n?u s? dó chia h?t cho c? 3 và 5
    if (num % 3 == 0 && num % 5 == 0) {
        printf("%d chia h?t cho c? 3 và 5\n", num);
    }
    // Ki?m tra n?u s? dó ch? chia h?t cho 3
    else if (num % 3 == 0) {
        printf("%d chia h?t cho 3\n", num);
    }
    // Ki?m tra n?u s? dó ch? chia h?t cho 5
    else if (num % 5 == 0) {
        printf("%d chia h?t cho 5\n", num);
    }
    // N?u không chia h?t cho c? 3 và 5
    else {
        printf("%d không chia h?t cho 3 và 5\n", num);
    }

    return 0;
}

