#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node
{
        int data;
        node*link;
};
typedef struct list
{
        node*first;
        node*last;
};
void Init(list &l)
{
     l.first=NULL;
     l.last=NULL;
}
node* GetNode(int x)
{
      node*p;
      p=new node;
      if(p==NULL ) exit(1);
      p->data=x;
      p->link=NULL;
      return p;
}
/*void InsertFirst(list &l,node *new_ele)
{
     if(l.first!=NULL)
     {
                     new_ele ->link = l.first;   //(1)
                     l.first = new_ele;  //(2)
     }
     else
     {
         l.first=new_ele;
         l.last=new_ele;
         
     }
}
void InputFirst(list &l)
{
     int n,x;
     node*new_ele;
     printf("\nnhap so phan tu:");
     scanf("%d",&n);
     for(int i=1;i<=n;i++)
     {
             printf("\nnhap phan tu thu %d:",i);
             scanf("%d",&x);
             new_ele =GetNode(x);
             InsertFirst(l,new_ele);
     }
}
void OutputFirst(list l)
{
     node*p;
     p=l.first;
     while(p!=NULL)
     {
                   printf("%d\t",p->data);
                   p=p->link;
     }
}
*/void Insertlast(list &l,node* new_ele)
{
     if(l.first!=NULL)
     {
                      l.last->link=new_ele;
                      l.last=new_ele;
     }
     else
     {
         l.first=new_ele;
         l.last=new_ele;
     }
}
void Inputlast(list &l)
{
     int n,x;
     node*new_ele;
     printf("\nnhap so phan tu:");
     scanf("%d",&n);
     for(int i=1;i<=n;i++)
     {
             printf("\nnhap phan tu thu %d:",i);
             scanf("%d",&x);
             new_ele =GetNode(x);
             Insertlast(l,new_ele);
     }
}
void Outputlast(list l)
{
     node*p;
     p=l.first;
     while(p!=NULL)
     {
                   printf("%d\t",p->data);
                   p=p->link;
     }
}
/*int tong(list l)
{
    int s=0;
    node*p;
    p=l.first;
    while(p!=NULL)
    {
                  s+=p->data;
                  p=p->link;
    }
    return s;
}
int max(list l)
{
    node*p;
    p=l.first;
    int max=p->data;
    p=p->link;
    while(p!=NULL)
    {
                  if(max<p->data)
                  max=p->data;
                  p=p->link;
                 
                  
    }
    return max;
}
int demx(list l,int x)
{
    node*p;
    p=l.first;
    int dem =0;
    while(p!=NULL)
    {
                  if(x==p->data)
                    dem++;
                  p=p->link;
    }
    return dem;
}
int KTNTO(int n)
{
    if(n<2) return 0;
    for(int i=2;i*i<=n;i++)
       if(n%i==0)
          return 0;
    return 1;
}

int demnguyento(list l)
{
    node*p;
    p=l.first;
    int dem=0;
    while(p!=NULL)
    {
                  if(KTNTO(p->data)==1)
                     dem++;
                  p=p->link;
    }
    return dem;
}
*/void InsertAfter(list &l,node *q,node *new_ele)
{
     if(q!=NULL)
     {
                new_ele->link=q->link;
                q->link=new_ele;
                if(q==l.last)
                   l.last=new_ele;
     }
}

int main()
{
    int x;
    list l;
    printf("\nkhoi tao mot danh sach!");
    Init(l);
    //printf("\nnhap mot danh sach lien ket de chen dau!");
    //InputFirst(l);
    //printf("\ndanh sach vua nhap chen dau la:");
    //OutputFirst(l);
    printf("\nnhap vao danh sach chen cuoi!");
    Inputlast(l);
    
    printf("\ndanh sach vua nhap chen dau la:");
    Outputlast(l);
    
    /*printf("\ntong cac phan tu %d",tong(l));
    
    printf("\nso lon nhat trong danh sach la: %d",max(l));
    
    printf("\nnhap x can dem:");
    scanf("%d",&x);
    printf("\nso lan xuat hien cua x trong danh sach la: %d",demx(l,x));
    
    printf("\ndanh sach co %d so nguyen to!",demnguyento(l));
    */
    printf("\nnhap so can chen:",n);
    scanf("%d",&n);

    node*p=l.first;
    new_ele=GetNode(x);
    InsertAfter(l,l.first,new_ele);
    Outputlast(l);
    getch();
    return 0;
}
