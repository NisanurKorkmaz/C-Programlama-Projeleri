//
//  main.c
//  matris simetrik mi
//  matrisin transpozesi
//  matrisin icinde sayi bulma
//  Created by Nisanur Korkmaz on 03/03/2020.
//  Copyright © 2020 Nisanur Korkmaz. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void TranspozeAl(int A[3][3], int N);
int SimetrikMi(int B[3][3], int N);
void SayiBul(int B[3][3], int N , int X , int yer[]);

int main()
{
    int matris[3][3]={ {3,6,9}, {7,4,2}, {11,56,90} };
    for(int i=0; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            printf("%d  ",matris[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    if(SimetrikMi(matris,3))
        printf("simetrik");
    else
        printf("simetrik degil");
    printf("\n");
    
    TranspozeAl(matris,3);
    
    for(int i=0; i<3 ; i++)
        {
            for(int j=0 ; j<3 ; j++)
            {
                printf("%d  ",matris[i][j]);
            }
            printf("\n");
            
        }
    printf("\n");
    int yer[2];
    SayiBul(matris, 3, 9, yer);
    printf("\nsayi %d %d sirada\n", yer[0], yer[1]);
    return 0;
}

void TranspozeAl(int A[3][3], int N)
{
    int i ,j ;
    for(i=0; i<N ; i++)
    {
        for(j=i+1; j<N ; j++)
        {
            int temp=A[i][j];
            A[i][j]=A[j][i];
            A[j][i]=temp;
        }
    }
    
}

int SimetrikMi(int B[3][3], int N )
{
    for(int i=0 ; i<N ; i++)
    {
        for(int j=i+1; j<N ; j++)
        {
            if(B[i][j]!=B[j][i])
                return 0 ;
        }
    }
    return 1 ;
}

void SayiBul(int A[3][3], int N, int X, int yer[])
{
    int i, j ;
    for(i=0 ; i<N ; i++)
    {
        for(j=0 ; j<N ; j++)
        {
            if(A[i][j]==X)
            {
                yer[0]=i;
                yer[1]=j;
            }
        }
    }
}
