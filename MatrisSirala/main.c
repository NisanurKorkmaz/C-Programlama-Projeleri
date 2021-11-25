//
//  main.c
//  MatrisSirala
//
//  Created by Nisanur Korkmaz on 05/03/2020.
//  Copyright © 2020 Nisanur Korkmaz. All rights reserved.
//

#include <stdio.h>

int main()
{
    int matris[3][3]={ {11,6,7}, {2,9,1} , {12,89,9}};
    for(int i=0 ; i<3; i++)
    {
        for(int j=0 ;j<3 ; j++)
        {
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }
    printf("\nmatrisin sirali hali \n");
    int i, j, k ;
    for(i=0 ; i<3; i++ )
    {
        for(k=0 ; k<3 ; k++)
        {
            for(j=0 ; j<2 ; j++)
            {
                if(matris[i][j]>matris[i][j+1])
                {
                    int temp=matris[i][j];
                    matris[i][j]=matris[i][j+1];
                    matris[i][j+1]=temp ;
                }
            }
        }
    }
    for(int i=0 ; i<3; i++)
    {
        for(int j=0 ;j<3 ; j++)
        {
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }
    return 0;
}
