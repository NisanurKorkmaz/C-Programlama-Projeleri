//
//  main.c
//  BUUBBLE SORT ALGORITMASI ILE DIZI SIRALAMA
//  Created by Nisanur Korkmaz on 27/02/2020.
//  Copyright © 2020 Nisanur Korkmaz. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int dizi[10] ;
    srand(time(NULL));
    printf("10 elemanli dizi: ");
    for(int i=0 ; i<10 ; i++)
    {
        dizi[i]= rand() % 100;
        printf("%d ", dizi[i]);
    }
    int temp , max ;
    max = 0 ;
    for(int i=0 ; i<10; i++)
    {
        for(int j=0 ; j<10-i-1 ; j++)
        {
            if(dizi[j]>dizi[j+1])
            {
                temp=dizi[j];
                dizi[j]=dizi[j+1];
                dizi[j+1]=temp ;
            }
        }
    }
    printf("dizinin sirali hali ");
    for(int k=0 ; k<10 ; k++)
    {
        printf("%d ", dizi[k]);
        
    }
    return 0 ;
}



