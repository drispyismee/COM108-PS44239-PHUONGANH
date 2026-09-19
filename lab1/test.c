#include <stdio.h>
#define PI 3.14159

int main() {
    float r, cv1, cv2;

    printf("Nhap ban kinh r: ");
    scanf("%f", &r);

    cv1 = 2 * PI * r;
    cv2 = 2 * 3.14159f * r;

    printf("Chu vi 1: %.2f\n", cv1);
    printf("Chu vi 2: %.2f\n", cv2);

    return 0;
}