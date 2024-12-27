#include <stdio.h>

// Hàm tìm ước chung lớn nhất
int timUCLN(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int so1, so2;

    // Khai báo và gán giá trị cho 2 số nguyên
    printf("Nhập hai số nguyên: ");
    scanf("%d %d", &so1, &so2);

    // Gọi hàm để tìm UCLN
    int ucln = timUCLN(so1, so2);

    // In kết quả
    printf("Ước chung lớn nhất của %d và %d là: %d\n", so1, so2, ucln);

    return 0;
}
