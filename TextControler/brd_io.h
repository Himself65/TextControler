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

#endif /* brd_io_h */

char * brd_gets(char *,int,FILE *);

int brd_puts(char *,FILE *);

int brd_newDocument(char *);

FILE * brd_newTxt(char *,char *);
