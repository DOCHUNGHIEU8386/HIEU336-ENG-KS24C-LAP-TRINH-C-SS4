#include <stdio.h>

int main() {
    int num;

    // Y�u c?u ngu?i d�ng nh?p v�o m?t s? nguy�n
    printf("Nh?p v�o m?t s? nguy�n: ");
    scanf("%d", &num);

    // Ki?m tra n?u s? d� chia h?t cho c? 3 v� 5
    if (num % 3 == 0 && num % 5 == 0) {
        printf("%d chia h?t cho c? 3 v� 5\n", num);
    }
    // Ki?m tra n?u s? d� ch? chia h?t cho 3
    else if (num % 3 == 0) {
        printf("%d chia h?t cho 3\n", num);
    }
    // Ki?m tra n?u s? d� ch? chia h?t cho 5
    else if (num % 5 == 0) {
        printf("%d chia h?t cho 5\n", num);
    }
    // N?u kh�ng chia h?t cho c? 3 v� 5
    else {
        printf("%d kh�ng chia h?t cho 3 v� 5\n", num);
    }

    return 0;
}

