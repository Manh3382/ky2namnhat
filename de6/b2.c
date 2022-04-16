#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define true 1

typedef struct
{
    char ID[10];
    char hoTen[30];
    char chucVu[20];
    char SDT[15];
} NhanVien;
// khai bao 1 node
typedef struct Node
{
    NhanVien data;
    struct node *next;
} node;
// khai bao dslk
typedef struct
{
    node *head;
    node *tail;
} list;

// khoi tao ds
void init(list *l)
{
    l->head = l->tail = NULL;
}
 // khoi tao node trong ds
 node *getNode(NhanVien x)
 {
     node* p = (node*)malloc(sizeof(node));
     p->data = x;
     p->next = NULL;
     return p;
 }

 // nhap du lieu
 void themCuoi(list *l, node *newnode)
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

 void nhapTT(list *l)
 {
     int n;
     printf("Nhap so luong nhan vien: ");
     scanf("%d", &n);
     for(int i=0; i<n; i++)
     {
     NhanVien data;
     printf("Nhap ID: ");
     fflush(stdin);
     gets(data.ID);
     printf("Nhap ho va ten: ");
     gets(data.hoTen);
     printf("Nhap Chuc vu: ");
     gets(data.chucVu);
     printf("Nhap SDT: ");
     gets(data.SDT);
    node *p = getNode(data);
    themCuoi(l,p);
     }

 }

 void hienthiTT(list l)
 {
     printf("\t\tDANH SACH NHAN VIEN\n");
     printf("%10s%20s%10s%15s\n", "ID", "Ho ten", "Chuc vu", "So DT");
     for(node*i=l.head; i!=NULL; i=i->next)
     {
        printf("%10s%20s%10s%15s\n", i->data.ID, i->data.hoTen, i->data.chucVu, i->data.SDT);
     }
 }

// tim Node
node *timNodeNhanVien(list *l)
{
    char key[20];
    fflush(stdin);
    gets(key);
    node *q = l->head;
    while(strcmp(q->data.hoTen, key)!=0)
    {
        q=q->next;
    }
    return q;
}

void xoaBatKy(node *p, list *l)
{
    if(l->head == p)
    {
        l->head = p->next;
        free(p);
    }
    else
    {
        node *q=l->head;
        while(q->next != p)
        {
            q=q->next;
        }
        q->next = p->next;
        free(p);
    }
}

 void menu()
 {
    printf("\t\t MENU\n");
    printf("\t1. Tao danh sach nhan vien\n");
    printf("\t2. Hien thi danh sach nhan vien\n");
    printf("\t3. Xoa nhan vien\n");
    printf("\t4. Ket thuc\n");
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
                nhapTT(&l);
                break;
            }
        case 2:
            {
                hienthiTT(l);
                break;
            }
        case 3:
            {
                printf("Nhap ten nhan vien can xoa: ");
                xoaBatKy(timNodeNhanVien(&l), &l);
                hienthiTT(l);
                break;
            }
        case 4:
            {
                printf("\t\t===BYE===");
                exit(0);
                break;
            }
        default:
            {
                printf("Vui long nhap cac so tu 1->4!!!");
            }
        }
        printf("Nhan phim bat ky de tro ve menu!");
        getch();
    }
    return 0;
 }
