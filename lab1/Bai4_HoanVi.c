#include <stdio.h>

int main() {
    // 1. Khai báo hai biến số nguyên a và b với giá trị ban đầu
    int a = 5;
    int b = 10;

    // 2. In giá trị ban đầu trước khi hoán vị
    printf("Truoc khi hoan vi: a = %d, b = %d\n", a, b);

    // 3. Thực hiện hoán vị không dùng biến trung gian (dùng phép +, -)
    a = a + b; // a mới chứa tổng của (a + b)
    b = a - b; // b mới = (a + b) - b = a ban đầu
    a = a - b; // a mới = (a + b) - a ban đầu = b ban đầu

    // 4. In giá trị sau khi hoán vị theo đúng định dạng mẫu
    printf("Sau khi hoan vi: a = %d, b = %d\n", a, b);

    return 0;
}