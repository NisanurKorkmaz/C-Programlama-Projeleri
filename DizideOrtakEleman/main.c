//
//  main.c
//  hey
//
//  Created by Nisanur Korkmaz on 27/02/2020.
//  Copyright © 2020 Nisanur Korkmaz. All rights reserved.
//

#include <stdio.h>

int main()
{
    int a[5];
    int b[5];
    printf("a dizisinin elemanlarini giriniz :");
    for(int i=0 ; i<5 ; i++)
    {
        scanf("%d ", &a[i]);
    }
    
    printf("b dizisinin elemanlarini giriniz :");
    for(int j=0;j<5 ; j++)
    {
        scanf("%d ", &b[j]);
    }
    printf("dizilerin ortak elemanlari: ");
    for(int k=0 ; k<5 ; k++)
    {
        for(int l=0 ; l<5 ; l++)
        {
            if(a[k]==b[l])
                printf("%d ", a[k]);
            
        }
        
    }
    printf("\n");
        return 0;
}
