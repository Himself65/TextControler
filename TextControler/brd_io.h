#ifndef brd_io_h
#define brd_io_h
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <signal.h>
#include <time.h>
#include <sys/stat.h> 
#include "unistd.h"

//定义
#define SIZE_OF__TXT 4 //.txt后缀的长度
#define SIZE_OF__OBLIQUE_LINE  2 //两个斜线的长度
#endif /* brd_io_h */

char * brdGets(char *,int,FILE *);

int brdPuts(char *,FILE *);

int brdNewDocument(const char *);

FILE * brdNewTxt(const char *,const char *);
