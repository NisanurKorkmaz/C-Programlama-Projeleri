//
//  main.c
//  20.2
//
//  Created by Nisanur Korkmaz on 22/12/2020.
//

#include <stdio.h>
#include <stdlib.h>
struct node {
    char isim[10];
    int yas;
    int kilo;
    float boy;
    struct node *next;
    
};
struct node *ilk=NULL, *son=NULL;

int main() {

    char isim[10];
    int y;
    int k;
    float b;
    FILE *dosya;
    dosya = fopen("oyuncu.txt","r" );
    if(dosya == NULL)
                perror("File Not Found ");
           else {
    while( fscanf(dosya," %s %d %d %f ",isim ,&y, &k, &b)!=EOF)
    {
        printf("%s  %d  %d  %.2f \n",isim,y,k,b);
    
    }
                }
    
    fclose(dosya);
    return 0;
}
