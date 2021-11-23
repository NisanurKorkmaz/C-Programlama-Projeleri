//  main.c
//  recursive factorielle
//
//  Created by Nisanur Korkmaz on 11/05/2020.
//  Copyright © 2020 Nisanur Korkmaz. All rights reserved.


#include <stdio.h>

int fact(int sayi)
{
    if(sayi<=0)
        return 1 ;
    else
        return sayi*fact(sayi-1);
}

int main()
{
    int sayi ;
    printf("sayi giriniz : ");
    scanf("%d",&sayi);
    printf("girdiginiz sayinin factorieli : %d\n ",fact(sayi));
    
    return 0;
}
