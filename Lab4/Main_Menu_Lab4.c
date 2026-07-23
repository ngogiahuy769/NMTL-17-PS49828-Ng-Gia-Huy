#include <stdio.h>
#include <math.h>

int main()
{
    int chon;

    do
    {
        printf("\n+---------------------------------------------------+\n");
        printf("|             MENU CHUONG TRINH LAB 4               |\n");
        printf("+---------------------------------------------------+\n");
        printf("| 1. Tinh trung binh tong cac so chia het cho 2     |\n");
        printf("| 2. Kiem tra So nguyen to                          |\n");
        printf("| 3. Kiem tra So chinh phuong                       |\n");
        printf("| 4. Thoat chuong trinh                             |\n");
        printf("+---------------------------------------------------+\n");
        printf(">> Xin moi chon chuc nang (1-4): ");
        scanf("%d", &chon);

        switch (chon)
        {
        case 1:
            int min;
            int max;
            int bienDem = 0;
            int tong = 0;
            float trungBinh;
            printf("Ban da chon chuong trinh so 1\n");
            printf("Hay nhap min: ");
            scanf("%d", &min);
            printf("hay nhap max: ");
            scanf("%d", &max);

            if (min > max)
            {
                printf("Loi min nho hon hoac bang max");
                return 0;
            }
            else
            {
                for (int i = min; i <= max; i++)
                {
                    if (i % 2 == 0)
                    {
                        bienDem++;
                        tong += i;
                    }
                }
            }

            if (bienDem == 0)
            {
                printf("Khong co diem trung binh vi khong co so nao chia het cho 2");
            }
            else
            {
                trungBinh = 1.0 * tong / bienDem;
                printf("Diem trung binh la %.2f", trungBinh);
            }

            break;

        case 2:
            printf("Ban da chon chuong trinh so 2\n");
            int x;
            int uoc = 1;

            printf("Nhap so nguyen x: ");
            scanf("%d", &x);

            if (x < 2)
            {
                uoc = 0;
            }
            else
            {
                for (int i = 2; i <= sqrt(x); i++)
                {
                    if (x % i == 0)
                    {
                        uoc = 0;
                    }
                }
            }

            if (uoc == 1)
            {
                printf("day la so nguyen to");
            }
            else
            {
                printf("day khong phai la so nguyen to");
            }
            break;

        case 3:
            // Goi chuong trinh chuc nang 3
            break;

        case 4:
            printf("Thoat chuong trinh!\n");
            break;

        default:
            printf("Lua chon khong hop le!\n");
        }

    } while (chon != 4);

    return 0;
}