#ifndef brd_io_h
#define brd_io_h
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include  <io.h>

//����
#define SIZE_OF__TXT 4 //.txt��׺�ĳ���
#define SIZE_OF__OBLIQUE_LINE  2 //����б�ߵĳ���
#endif /* brd_io_h */

char * brdGets(char *,int,FILE *);

int brdPuts(char *,FILE *);

int brdNewDocument(const char *);

FILE * brdNewTxt(const char *,const char *);
