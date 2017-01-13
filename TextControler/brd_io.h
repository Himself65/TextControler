//
//  brd_io.h
//  TextControler
//
//  Created by Himself65 on 2017/1/12.
//  Copyright © 2017年 Himself65. All rights reserved.
//

#ifndef brd_io_h
#define brd_io_h
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/unistd.h>

#define SIZE_OF__TXT 4
#define SIZE_OF__II 2
#endif /* brd_io_h */

char * brd_gets(char *,int,FILE *);

int brd_puts(char *,FILE *);

int brd_newDocument(const char *);

FILE * brd_newTxt(const char *,const char *);
