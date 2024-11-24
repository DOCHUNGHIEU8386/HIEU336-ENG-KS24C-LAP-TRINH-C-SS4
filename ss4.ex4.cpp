#include <stdio.h>

int main() {
    int month;

    // Y�u c?u ngu?i d�ng nh?p v�o s? th�ng
    printf("Nh?p v�o s? th�ng (1-12): ");
    scanf("%d", &month);

    // Ki?m tra s? th�ng v� in ra s? ng�y c?a th�ng d�
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("Th�ng %d c� 31 ng�y.\n", month);
            break;
        case 4: case 6: case 9: case 11:
            printf("Th�ng %d c� 30 ng�y.\n", month);
            break;
        case 2:
            printf("Th�ng 2 c� 28 ho?c 29 ng�y.\n");
            break;
        default:
            printf("S? th�ng kh�ng h?p l?.\n");
    }

    return 0;
}

