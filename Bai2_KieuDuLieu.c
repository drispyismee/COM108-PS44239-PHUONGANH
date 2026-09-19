#include <stdio.h>

int main() {
    // 1. Khai báo các biến và gán giá trị
    char mssv[] = "PS44239";         // Mã số sinh viên (Chuỗi kí tự)
    char hoTen[] = "Phuong Nguyen";     // Họ và tên (Chuỗi kí tự)
    int namsinh = 1999;                // Năm sinh (Số nguyên)
    float diemTrungBinh = 7.5;        // Điểm trung bình (Số thực)

    // Tính tuổi tự động
    int tuoi = 2026 - 1999;

    // 2. Xuất dữ liệu ra màn hình theo đúng định dạng mẫu
    printf("Ma so sinh vien: %s\n", mssv);
    printf("Ho Va Ten: %s\n", hoTen);
    printf("Nam sinh: %d\n", namsinh);
    printf("Tuoi: %d\n", tuoi);
    printf("Diem Trung Binh: %.1f\n", diemTrungBinh);

    return 0;
}