//
//  main.c
//  SatirSutunToplama
//
//  Created by Nisanur Korkmaz on 05/03/2020.
//  Copyright © 2020 Nisanur Korkmaz. All rights reserved.
//

#include <stdio.h>

int main()
{
    int a[3][3]={{30, 27, 93}, {29, 10, 11}, {60, 40, 15}};
    int toplam1=0 , toplam[3]={0, 0, 0} ;
    for(int i=0; i<3; i++)
    {
        toplam1=0;
        for(int j=0 ; j<3; j++)
        {
            printf("%d ", a[i][j]);
            toplam1=toplam1+a[i][j];
        }
        printf("   %d\n", toplam1);
    }
    
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
                toplam[i]=toplam[i]+a[j][i];
        }
    }
    
    printf("----------\n");
    printf("%d %d %d " ,toplam[0], toplam[1], toplam[2]);
    return 0;
}
