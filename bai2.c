/******************************************************************************
 * Họ và tên: [NGUYỄN VĂN NGHĨA]
 * MSSV:      [PS43782]
 * Lớp:       [COM108]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG HÀM TÍNH NĂM NHUẬN 
//  Input: Nhập vào năm 
//  Output: Có phải là năm nhuận hay không? 
//  Biết rằng: Năm nhuận là năm chia hết cho 400 hoặc chia hết cho 4 nhưng không 
//  chia hết cho 100 
 
#include <stdio.h>

//Tạo hàm
int checkYear(int year)
{
    int flag = 0;
    if (year % 4 == 0 && year % 100 != 0)
    {
        flag = 1; // Năm nhuận
    }
    else if (year % 400 == 0)
    {
        flag = 1; // Năm nhuận
    }
    else
    {
        flag = 0; // Năm không nhuận
    }
    return flag;
}

int main() {

    int year;

    printf("Nhap nam: ");
    scanf("%d", &year);

    int checkYearNhuan = checkYear(year);
    if (checkYearNhuan)
    {
        printf("%d la nam nhuan.\n", year);
    }
    else
    {
        printf("%d khong phai la nam nhuan.\n", year);
    }

    return 0;
}

