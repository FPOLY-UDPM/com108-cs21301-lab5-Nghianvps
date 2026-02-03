/******************************************************************************
 * Họ và tên: [NGUYỄN VĂN NGHĨA]
 * MSSV:      [PS43782]
 * Lớp:       [COM108]
 *****************************************************************************/

#include <stdio.h>

void giaiPTB1(float a, float b, float *x)
{
    if (a == 0)
    {
        if (b == 0)
        {
            printf("Phuong trinh vo so nghiem\n");
        }
        else
        {
            printf("Phuong trinh vo nghiem\n");
        }
    }
    else
    {
        *x = -b / a;
    }
}

int main()
{
    float a, b;
    float x;

    printf("Nhap a: ");
    scanf("%f", &a);

    printf("Nhap b: ");
    scanf("%f", &b);

    giaiPTB1(a, b, &x);

    if (a != 0)
    {
        printf("Nghiem x = %.2f\n", x);
    }

    return 0;
}