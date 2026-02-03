/******************************************************************************
 * Họ và tên: [NGUYỄN VĂN NGHĨA]
 * MSSV:      [PS43782]
 * Lớp:       [COM108]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG HÀM HOÁN VỊ 
//  Input: Nhập vào từ bàn phím 2 giá trị a,b 
//  Output: hoán vị 2 giá trị của a và b 
//  Hướng dẫn thực hiện: 
//  Xây dựng hàm hoán vị sử dụng con trỏ và gọi hàm theo tham chiếu 

#include <stdio.h>

//Tạo hàm
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    int a, b;
    printf("Nhap a: ");
    scanf("%d", &a);

    printf("Nhap b: ");
    scanf("%d", &b);

    printf("Truoc khi hoan vi: a = %d, b = %d\n", a, b);

    swap(&a, &b);

    printf("Sau khi hoan vi: a = %d, b = %d\n", a, b);

    return 0;
}

