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
    if(name != NULL){
        if(access(name, 0) == -1){
            if (mkdir(name, 0777)){
            }
        }
    }
    else{
        printf("brd_newDocument failed\n");
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}

FILE * brd_newTxt(char * pathname,char * textname){
    //未完成
    FILE *fp;
    int i = 0;
    int sizeOfpathname = 0;
    int sizeOftextname = 0;
    while (pathname[sizeOftextname] != '\0') {
        sizeOftextname++;
    }
    while (textname[sizeOfpathname] != '\0') {
        sizeOfpathname++;
    }
    char * pt;
//    int sizeOfpathname = sizeof(pathname)/sizeof(char*);
//    int sizeOftextname = sizeof(textname)/sizeof(char*);
    if (pathname != NULL && textname != NULL) {
        char localname[sizeOfpathname + 2 + sizeOftextname + 4]; //问题，localname没赋值
        if (access(pathname, 0) != -1) {
            for (i = 0; i < sizeOfpathname ; i++) {
                localname[i] = pathname[i];
            }
            localname[++i] = '/';
            localname[++i] = '/';
            int j = 0;
            for (; i < sizeOftextname + sizeOfpathname; i++) {
                localname[i] = pathname[j];
            }
            j = 0;
            char ichar[] = (".txt");
            for (; i< sizeOfpathname + sizeOftextname + 6; i++) {
                localname[i] = ichar[j];
            }
        }
        else{
            printf("brd_newTxt failed\n");
            return NULL;
        }
        pt = localname;

        if((fp=fopen(localname,"w")) == NULL)//打开文件 没有就创建
        {
            printf("创建失败\n");
            
        }
        fprintf(fp,"创建成功");
        fclose(fp);
    }
    return fp;
}
