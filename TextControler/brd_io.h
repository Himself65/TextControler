#pragma once
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <io.h>
#include<time.h>
#include<Windows.h>

//����
#define SIZE_OF__TXT 4 //.txt��׺�ĳ���
#define SIZE_OF__OBLIQUE_LINE  2 //����б�ߵĳ���


char * brdGets(char *,int,FILE *);

int brdPuts(char *,FILE *);

int brdNewDocument(const char *);

int brdNewTxt(const char *,const char *);

void wait_time(double seconds);