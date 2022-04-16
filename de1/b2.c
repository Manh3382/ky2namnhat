#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define true 1
#define false 0

//1. khai bao cau truc du lieu DSLK
typedef struct
{
    char ID[20];
    char hoTen[30];
    char chucVu[20];
    unsigned int SDT;
} NhanVien;

// khai bao cau truc cua 1 node
typedef struct Node
{
    NhanVien data;
    struct Node *next;
} node;

// khai bao cau truc cua DSLK
typedef struct
{
    node *head;
    node *tail;
} list;
//2. Khoi tao DSLK
void init(list *l)
{
    l->head = l->tail = NULL;
}

NhanVien nhapthongtin()
{
    NhanVien data;
    printf("Nhap ID: ");
    fflush(stdin);
    gets(data.ID);
    printf("Nhap ho ten: ");
    gets(data.hoTen);
    printf("Nhap chuc vu: ");
    gets(data.chucVu);
    fflush(stdin);
    printf("Nhap SDT: ");
    scanf("%u", &data.SDT);
    return data;
}

void themvaocuoiDS(list *l, node *newnode)
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

//3. Tao Node trong DS
node *getNode()
{
    node*p = (node*)malloc(sizeof(node));
    if(p==NULL)
    {
        printf("Cap phat khong thanh cong!\n");
        return NULL;
    }
    p->data = nhapthongtin();
    p->next = NULL;
    return p;
}
//4. Nhap du lieu DS
void nhapDS(list *l)
{
    int k=1;
    while(true)
    {
        printf("\tNhap thong tin nhan vien thu %d: \n", k++);
        themvaocuoiDS(l, getNode());
        printf("Nhap y de tiep tuc: ");
        fflush(stdin);
        char nhap = getchar();
        if(nhap != 'y' && nhap != 'Y')
        {
            break;
        }
    }
}
// tim Node
node *timNodeNhanVien(list *l)
{
    char hten[20];
    fflush(stdin);
    gets(hten);
    node *q=l->head;
    while(strcmp(q->data.hoTen, hten)!=0)
    {
        q=q->next;
    }
    return q;
}
// xoa nhan vien bat ki
void xoaBatKi(node *p, list*l)
{
    if(l->head==p)
    {
        l->head = p->next;
        free(p);
    }
    else
    {
        node *q=l->head;
        while(q->next!=p)
        {
            q=q->next;
        }
        q->next=p->next;
        free(p);
    }
}

void hienthiDS(list l)
{
    printf("\t\tDANH SACH NHAN VIEN\n");
    printf("%10s%20s%20s%20s\n", "ID", "Ho va ten", "Chuc vu", "SDT");
    for(node *i=l.head; i!=NULL; i=i->next)
    {
    printf("%10s%20s%20s%20u\n", i->data.ID, i->data.hoTen, i->data.chucVu, i->data.SDT);
    }
}

void menu()
{
    printf("\t1. Tao danh sach nhan vien\n");
    printf("\t2. Hien thi danh sach nhan vien\n");
    printf("\t3. Xoa nhan vien\n");
    printf("\t4. Ket thuc\n");
    printf("\t\tVui long chon: ");
}
int main()
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
                nhapDS(&l);
                break;
            }
        case 2:
            {
                hienthiDS(l);
                break;
            }
        case 3:
            {
                printf("Nhap ten nhan vien can xoa: ");
                xoaBatKi(timNodeNhanVien(&l), &l);
                hienthiDS(l);
                break;
            }
        case 4:
            {
                printf("\t\t---BYE---");
                exit(0);
                break;
            }
        default:
            {
                printf("Vui long nhap lai!!!\n");
            }
        }
        printf("Nhan phim bat ky de tro lai menu: ");
    }
    return 0;
}
