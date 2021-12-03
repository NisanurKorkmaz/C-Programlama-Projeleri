//
//  main.c
//  20.1
//
//  Created by Nisanur Korkmaz on 22/12/2020.
//  NODE LISTESINDE ISLEMLER 


#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *ilk=NULL, *son=NULL;

void SonaEkle(int a)
{
    struct node *yeni = (struct node*) malloc(sizeof(struct node));
    yeni->data=a;
    if(ilk==NULL)
    {
        ilk=yeni;
        son=yeni;
        son->next=NULL;
    }
    else
    {
        son->next=yeni;
        son=yeni;
        son->next=NULL;
    }
    printf("Eleman basarili bir sekilde eklendi\n");
}
void Listele()
{
    struct node *liste=ilk;
    if(liste==NULL)
        printf("Liste bos\n");

    while(liste!=NULL)
    {
        printf("%d\t",liste->data);
        liste=liste->next;
    }
    printf("\n");
}
void say()
{
    int sayac=0;
    struct node *liste=ilk;
    while(liste!=NULL)
    {
        //printf("%d\t",liste->data);
        liste=liste->next;
        sayac++;
    }
    printf("Listedeki eleman sayisi %d\n",sayac);
}
int main() {
    int secim=1;
    while(secim!=3){
        printf("-----------MENU------------\n");
        printf("0 - Listedeki elemanlari yazdirma\n");
        printf("1 - Listeye yeni eleman ekleme \n");
        printf("2 - Listedeki eleman sayisi\n");
        printf("3 - Cikis\n");
        printf("Seciminiz (0-3)? : ");
        scanf("%d",&secim);
        
        switch (secim) {
            case 0:
                Listele();
                break;
            case 1:
                printf("eklenecek elemani giriniz ");
                int a;
                scanf("%d",&a);
                SonaEkle(a);
                break;
            case 2:
                say();
            default:
                break;
        }
        
    }
  
    return 0;
}
