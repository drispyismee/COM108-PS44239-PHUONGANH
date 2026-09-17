#include <stdio.h>

int main() {
    // 1. Khai báo và gán giá trị trực tiếp cho các biến
    char mssv[] = "PS44239";
    char hoTen[] = "Phuong Nguyen";
    
    // Khai báo điểm kiểu số thực (float) từ 0 đến 10
    float diemToan = 8.5;
    float diemLy = 7.0;
    float diemHoa = 9.0;
    
    // 2. Tính điểm trung bình (Toán hệ số 2)
    // Ép kiểu (float) cho mẫu số để kết quả phép chia không bị mất phần thập phân
    float diemTrungBinh = (diemToan * 2 + diemLy + diemHoa) / (float)4;
    
    // 3. In ra màn hình theo đúng định dạng đề bài
    printf("Ma so sinh vien: %s\n", mssv);
    printf("Ho Va Ten: %s\n", hoTen);
    printf("Diem Trung Binh: %.2f\n", diemTrungBinh); // %.2f để làm tròn 2 chữ số thập phân
    
    return 0;
}