#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "brd_io.h"

int main(void) {
	brdNewDocument("hello");
	brdNewTxt("hello","text");
	getchar();

	return EXIT_SUCCESS;
}



void text() {
	char *f = (char*)malloc(sizeof(int) * 2);
	f = "he";
	brdPuts(f,stdout);
	getchar();
	return;
}

//		brdPuts("输入要创建的文件夹",stdout);
//		brdNewDocument("shit");

//		brdPuts("motherfucker",stdout);
//		char name[10];
//		brdGets(name,10,stdin);
//		brdPuts(name,stdout);
//		getchar();