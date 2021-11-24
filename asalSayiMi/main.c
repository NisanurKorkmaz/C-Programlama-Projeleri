//
//  main.c
//  second
//
//  Created by Nisanur Korkmaz on 09/02/2020.
//  Copyright © 2020 Nisanur Korkmaz. All rights reserved.
//

#include <stdio.h>


int main(int argc, const char * argv[]) {
    int a , sayac ;
    printf("bir sayi giriniz \n");
    scanf("%d", &a);
    sayac=0 ;
    for(int i=2 ; i<a ; i++)
    {
        if(a%i==0)
            sayac++ ;
    
    }
    if (sayac!=0)
        printf("asal degil \n");
    else
        printf("asal sayi \n");
    return 0;
}
