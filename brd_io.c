//
//  brd_io.c
//  TextControler
//
//  Created by Himself65 on 2017/1/12.
//  Copyright © 2017年 Himself65. All rights reserved.
//

#include "brd_io.h"

char * brd_gets(char * inPutChar,int size ,FILE * file){
    char * saveChar = inPutChar;
    int i = 0;
    fgets(saveChar, size, file);
    if(saveChar != NULL){
        while (saveChar[i]!='\n') {
            i++;
        }
        saveChar[i] = '\0';
    }
    else{
        printf("输入失败\n");
        return inPutChar = NULL;
    }
    return inPutChar = saveChar;
}

int brd_puts(char * printChar,FILE * file){
    if (printChar != NULL) {
        fputs(printChar, file);
        putc('\n', file);
        return EXIT_SUCCESS;
    }
    else{
        return EXIT_FAILURE;
    }
    return EOF;
}


int brd_newDocument(char * name){
    
    return EXIT_SUCCESS;
}
