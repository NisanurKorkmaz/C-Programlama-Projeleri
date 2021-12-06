//
//  main.c
//  19.1
//
//  Created by Nisanur Korkmaz on 09/06/2020.
//  Copyright © 2020 Nisanur Korkmaz. All rights reserved.

#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    
    FILE *dosya;
    char ad[100];
    char soyadi[100];
    unsigned int NO;
    char bolum[100];
    char cinsiyet;
    char dogum_yeri[100];
    unsigned int yas;
    unsigned int telefon;
    char devam = 'E';
    
    dosya = fopen("veri.dat", "a+");
    if(!dosya) return 1;
    
    while(toupper(devam) == 'E') {
        
        printf("ogrencinin adini giriniz: ");
        fflush(stdout);
        scanf("%99s", &ad);
        
        printf("ogrencinin soyadini giriniz: ");
        fflush(stdout);
        scanf("%99s", &soyadi);
        
        printf("ogrenci numarasini giriniz: ");
        fflush(stdout);
        scanf("%u", &NO);
        
        printf("ogrencinin bolumunu giriniz: ");
        fflush(stdout);
        scanf("%99s", &bolum);
        
        printf("ogrencinin cinsiyetini giriniz (E/K): ");
        fflush(stdout);
        scanf(" %c", &cinsiyet);
        
        printf("ogrencinin dogum yerini giriniz: ");
        fflush(stdout);
        scanf("%99s", &dogum_yeri);
        
        printf("ogrencinin yasini giriniz: ");
        fflush(stdout);
        scanf("%u", &yas);
        
        printf("ogrencinin telefon numarasini giriniz: ");
        fflush(stdout);
        scanf("%u", &telefon);
        
        fprintf(dosya, "-----------------------------\n");
        fprintf(dosya, "|  ADI        : %s\n", ad);
        fprintf(dosya, "|  SOYADI     : %s\n", soyadi);
        fprintf(dosya, "|  NO         : %u\n", NO);
        fprintf(dosya, "|  BOLUMU     : %s\n", bolum);
        fprintf(dosya, "|  CINSIYETI  : %c\n", cinsiyet);
        fprintf(dosya, "|  DOGUM YERI : %s\n", dogum_yeri);
        fprintf(dosya, "|  YASI       : %u\n", yas);
        fprintf(dosya, "|  TELEFONU   : %u\n", telefon);
        
        printf("Kayit yapmaya devam etmek istiyor musunuz? (E/H): ");
        fflush(stdout);
        scanf(" %c", &devam);
    }
    
    fclose(dosya);
    
    return 0;
}
