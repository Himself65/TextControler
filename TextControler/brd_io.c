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
        while (getchar() == '\n' ) {
            continue;
        }
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


int brd_newDocument(const char * name){
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

FILE * brd_newTxt(const char * pathname,const char * textname){
    
    
    int sizeOfpathname = 0;
    int sizeOftextname = 0;
    while (pathname[sizeOfpathname] != '\0') {
        sizeOfpathname++;
    }
    while (textname[sizeOftextname] != '\0') {
        sizeOftextname++;
    }
    int sumSizeOfname = sizeOftextname + sizeOfpathname + SIZE_OF__II + SIZE_OF__TXT;
    
    char *localname = (char *) malloc(sizeof(char) * sumSizeOfname);
//    char localname[sumSizeOfname];
//    
    //pathname的大小 + textname的大小 + “//” + “.txt”
//    localname[0] ='f';
//    printf("%c",localname[0]);
//    printf("hello");
    //
//    int sizeOfpathname = sizeof(pathname)/sizeof(char*);
//    int sizeOftextname = sizeof(textname)/sizeof(char*);
    FILE *fp;
    if (pathname != NULL && textname != NULL) {
        int i = 0;
        if (access(pathname, 0) != -1) {
            for (i = 0; i < sizeOfpathname ;i++) {
                localname[i] = pathname[i];
            }
            
            localname[i++] = '/';
            localname[i++] = '/';
            
            //赋值txt的名字
            int j = 0;
            for (; i < sizeOftextname + sizeOfpathname + 2; i++,j++) {
                localname[i] = textname[j];
            }
            
            
            j = 0;
            char ichar[] = (".txt");
            for (; i< sizeOfpathname + sizeOftextname + 6; i++,j++) {
                localname[i] = ichar[j];
            }
            localname[++i] = '\0';
        }
        else{
            printf("brd_newTxt failed\n");
            return NULL;
        }
        
        if((fp=fopen(localname,"w")) == NULL)//打开文件 没有就创建
        {
            printf("创建失败\n");
            
        }
        fprintf(fp,"创建成功");//之后应该加上时间
        fclose(fp);
    }
    return fp;
}
