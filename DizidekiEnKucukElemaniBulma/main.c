//
//  main.c
//  Created by Nisanur Korkmaz on 27/02/2020.
//  Copyright © 2020 Nisanur Korkmaz. All rights reserved.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    
    int dizi[10];
    int min , indis ;
    srand(time(NULL));
    
    for(int i=0 ; i<10 ; i++)
    {
        dizi[i]= rand() % 100 ;
        printf("%d  ", dizi[i]);
    }
    min=dizi[0];
    indis=0 ;
    for(int j=0 ; j<10 ; j++)
    {
        if(dizi[j]<min)
        {
            min=dizi[j] ;
            indis = j ;
        }
            
    }
    printf("\ndizinin en kucuk elemani %d\n", min);
    printf("elemanin indisi %d\n", indis );
    
    return 0;
}
