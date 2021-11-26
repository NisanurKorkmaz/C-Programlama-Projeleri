//
//  main.c
//  AZE
//
//  Created by Nisanur Korkmaz on 28/02/2020.
//  Copyright © 2020 Nisanur Korkmaz. All rights reserved.
//
void tekciftduzenle(int dizi[], int a);

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[10]={ 12, 45 , 7, 89, 76 , 32 , 11, 55 , 87 , 90  };
    
    printf("dizinin sirali hali\n");
    tekciftduzenle(dizi, 10);
    for(int i=0 ; i<10 ; i++)
    {
        printf("%d ", dizi[i]);
    }
    printf("\n");
    return 0;
}
void tekciftduzenle(int dizi[] , int a )
{
    int tek=0 ;
    int cift=a-1 ;
    
    while(tek<cift)
    {
        while(dizi[tek]%2==1)
            tek++ ;
        while(dizi[cift]%2==0)
            cift-- ;
        if(cift>tek)
        {
            int temp ;
            temp=dizi[cift];
            dizi[cift]=dizi[tek];
            dizi[tek]=temp ;
        }
    }
    
}
