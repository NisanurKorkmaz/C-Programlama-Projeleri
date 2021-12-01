//  11.54
//  main.c
//  Created by Nisanur Korkmaz on 05/04/2020.
//  Copyright © 2020 Nisanur Korkmaz. All rights reserved.
//  BOS BIR SATRANÇ TAHTASI UZERINDE ATIN KONUMU VERILDIGINDE HAREKET EDEBILECEGI YERLERI GOSTEREN PROGRAM

#include <stdio.h>
#include <stdlib.h>

void drawBoard(char[][8]);
void createBoard(char[][8], int, int);

int main()
{
    int x, y;
    char board[8][8];

    do {
        printf("Atin konumu : ");
        scanf("%d %d", &x, &y);
    } while(x<0 || x>7 || y<0 || y>7);
    printf("------------------\n");

    createBoard(board, x, y);
    drawBoard(board);

    return 0;
}

void createBoard(char board[][8], int x, int y) {
    for(int i=0; i<8; i++) {
        for(int j=0; j<8; j++) {
            if(i==x && j==y) {
                board[i][j]='A';
            } else {
                board[i][j]='-';
            }
            if(i==x-2 || i==x+2) {
                if(j==y-1 || j==y+1) {
                    board[i][j]='*';
                }
            } else if(i==x-1 || i==x+1) {
                if(j==y-2 || j==y+2) {
                    board[i][j]='*';
                }
            }
        }
    }
}

void drawBoard(char board[][8]) {
    printf(" ");
    for(int i=0; i<8; i++) {
        printf(" %d", i);
    }
    printf("\n");
    for(int i=0; i<8; i++) {
        printf("%d ", i);
        for(int j=0; j<8; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}
