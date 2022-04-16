#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0

// khai bao cau truc du lieu DSLK
typedef struct
{
    char SBD[20];
    char hoTen[30];
    float diemToan;
    float diemLy;
    float diemTA;
    float tongDiem;
} DiemThi;

typedef struct Node
{
    DiemThi data;
    struct Node *next;
} node;

typedef struct
{
    node *head;
    node *tail;
} list;

// khoi tao DSLK
void init(list*l)
{
    l->head = l->tail = NULL;
}

// tao node trong danh sach
node *getNode (DiemThi x)
{
    node*p=(node*)malloc(sizeof(node));
    p->data = x;
    p->next = NULL;
    return p;
}

// nhap du lieu cho danh sach
void themCuoi(list*l, node*newnode)
{
    if(l->head == NULL)
    {
        l->head = l->tail = newnode;
    }
    else
    {
        l->tail->next = newnode;
        l->tail = newnode;
    }
}

void sxDiemToan(list *l)
{
    for(node* i=l->head; i!=NULL; i=i->next)
    {
        for(node* j=i->next; j!=NULL; j=j->next)
        {
            if(i->data.diemToan < j->data.diemToan)
            {
                DiemThi temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
    hienthiDS(*l);
}
void sxDiemLy(list *l)
{
    for(node* i=l->head; i!=NULL; i=i->next)
    {
        for(node* j=i->next; j!=NULL; j=j->next)
        {
            if(i->data.diemLy < j->data.diemLy)
            {
                DiemThi temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
    hienthiDS(*l);
}
void sxDiemTA(list *l)
{
    for(node* i=l->head; i!=NULL; i=i->next)
    {
        for(node* j=i->next; j!=NULL; j=j->next)
        {
            if(i->data.diemTA < j->data.diemTA)
            {
                DiemThi temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
    hienthiDS(*l);
}
void sxDiemTong(list *l)
{
    for(node* i=l->head; i!=NULL; i=i->next)
    {
        for(node* j=i->next; j!=NULL; j=j->next)
        {
            if(i->data.tongDiem < j->data.tongDiem)
            {
                DiemThi temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
    hienthiDS(*l);
}
void nhapThongTin(list *l)
{
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        DiemThi data;
        printf("Nhap SBD: ");
        fflush(stdin);
        gets(data.SBD);
        printf("Nhap Ho va ten: ");
        gets(data.hoTen);
        printf("Nhap diem Toan: ");
        scanf("%f", &data.diemToan);
        printf("Nhap diem Ly: ");
        scanf("%f", &data.diemLy);
        printf("Nhap diem Anh: ");
        scanf("%f", &data.diemTA);

        data.tongDiem = data.diemToan + data.diemLy + data.diemTA;
        node* p = getNode(data);
        themCuoi(l,p);
    }
}

void hienthiDS(list l)
{
    printf("\t\tDANH SACH DIEM THI THPT\n");
    printf("%3s%10s%20s%20s%10s%10s%10s\n", "STT", "SBD", "Ho ten", "Diem Toan", "Diem Ly", "Diem TA", "Tong");
    int stt=1;
    for(node *i=l.head; i!=NULL; i=i->next)
    {
        printf("%3d%10s%20s%20.2f%10.2f%10.2f%10.2f\n",
            stt++, i->data.SBD, i->data.hoTen, i->data.diemToan, i->data.diemLy, i->data.diemTA, i->data.tongDiem);
    }
}

void menu()
{
    printf("\t\tMENU\n");
    printf("\t1. Tao danh sach thi sinh\n");
    printf("\t2. Hien thi danh sach thi sinh\n");
    printf("\t3. Sap xep diem thi\n");
    printf("\t4. Ket thuc\n");
}

void menu2()
{
    printf("\t\tMENU\n");
    printf("\t1. Sap xep diem Toan\n");
    printf("\t2. Sap xep diem Ly\n");
    printf("\t3. Sap xem diem Tieng Anh\n");
    printf("\t4. Sap xep tong diem\n");
}
int main ()
{
    int chon;
    list l;
    init(&l);
    while(true)
    {
        system("cls");
        menu();
        scanf("%d", &chon);
        switch(chon)
        {
        case 1:
            {
                nhapThongTin(&l);
                break;
            }
        case 2:
            {
                hienthiDS(l);
                break;
            }
        case 3:
            {
                int chon2;
                system("cls");
                menu2();
                scanf("%d", &chon2);
                switch(chon2)
                {
                case 1:
                    {
                        sxDiemToan(&l);
                        break;
                    }
                case 2:
                    {
                        sxDiemLy(&l);
                        break;
                    }
                case 3:
                    {
                        sxDiemTA(&l);
                        break;
                    }
                case 4:
                    {
                        sxDiemTong(&l);
                        break;
                    }
                }
                break;
            }
        case 4:
            {
                exit(0);
                break;
            }
        default:
            printf("Vui long nhap cac so tu 1->4\n");
        }
        printf("Nhan phim bat ky de tro lai menu: ");
        getch();
    }
    return 0;
}

