/******************************************************************************
 * Họ và tên: [NGUYỄN VĂN NGHĨA]
 * MSSV:      [PS43782]
 * Lớp:       [COM108]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH TÌM GIÁ TRỊ LỚN NHẤT TRONG 3 SỐ  
//  Input: Nhập từ bàn phím 3 số bất kỳ 
//  Output: Xuất ra màn hình số lớn nhất trong 3 số 
//  Hướng dẫn: Xây dựng hàm tìm giá trị lớn nhất trong 3 số. Hàm có giá trị trả về mà 
//  giá trị lớn nhất giữa 3 số 

#include <stdio.h>

// //Tạo hàm 
// int tenHam(so1, so2, so3){ 
// int max; 
// //Cách giải để tìm ra số lớn nhất 
// return max; 
// }

int timSoMax(int so1, int so2, int so3)
{
    int timMax;
    if (so1 >= so2 && so1 >= so3)
    {
        timMax = so1;
    }
    else if (so2 >= so1 && so2 >= so3)
    {
        timMax = so2;
    }
    else
    {
        timMax = so3;
    }

    return timMax;
}

int main() {

    int so1, so2, so3;

    printf("Nhap so 1: ");
    scanf("%d", &so1);

    printf("Nhap so 2: ");
    scanf("%d", &so2);

    printf("Nhap so 3: ");
    scanf("%d", &so3);

    int max_value = timSoMax(so1, so2, so3);
    printf("So lon nhat la: %d\n", max_value);

    return 0;
}