#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct
{
    char MSV[10];
    char hoTen[20];
    int nam;
} SinhVien;

SinhVien nhapTT()
{
    SinhVien sv;
    printf("Nhap ma SV: ");
    fflush(stdin);
    gets(sv.MSV);
    printf("Nhap ho ten: ");
    gets(sv.hoTen);
    printf("Nhap nam sinh: ");
    scanf("%d", &sv.nam);
    return sv;
}

void ghiVaoFile()
{
    FILE *f = fopen("DS_SV.C","wb");
    int k=1;
    while(1)
    {
        printf("Nhap thong tin sinh vien thu %d \n", k++);
        SinhVien sv = nhapTT();
        fwrite(&sv,sizeof(sv),1,f);
        printf("Nhan y de tiep tuc");
        fflush(stdin);
        char nhap = getchar();
        if(nhap != 'y' && nhap != 'Y')
        {
            break;
        }
    }
    fclose(f);
}

void hienThiFile()
{
    FILE *f = fopen("DS_SV.C", "rb");
    int stt=1;
    SinhVien sv;
    printf("\t\tDANH SACH SINH VIEN\n");
    printf("%3s%10s%20s%10s\n", "STT", "Ma SV", "Ho ten", "Nam sinh");
    while(fread(&sv,sizeof(sv),1,f)>0)
    {
        printf("%3d%10s%20s%10d\n", stt++, sv.MSV, sv.hoTen, sv.nam);
    }
    fclose(f);
}

void menu()
{
    printf("\t\tMENU\n");
    printf("\t1. Tao danh sach\n");
    printf("\t2. Hien danh sach\n");
    printf("\t3. Sua thong tin sinh vien\n");
    printf("\t4. Ket thuc\n");
    printf("\t\tVui long chon: ");
}

int main()
{
    int chon;
    while(1)
    {
        system("cls");
        menu();
        scanf("%d", &chon);
        switch(chon)
        {
            case 1:
                {
                    ghiVaoFile();
                    break;
                }
            case 2:
                {
                    hienThiFile();
                    break;
                }
            case 3:
                {
                    break;
                }
            case 4:
                {
                    printf("\t\t==BYE===");
                    exit(0);
                }
            default:
                {
                    printf("Vui long nhap so tu 1->4\n");
                }
        }
        printf("nhan phim bat ky de tro ve menu\n");
        getch();
    }
}
