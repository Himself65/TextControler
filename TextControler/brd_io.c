#include "brd_io.h"

char * brdGets(char * inPutChar,const int size ,FILE * Stream){ 
    char * saveChar = inPutChar;
    int lastSize = 0;
    fgets(saveChar, size, Stream);

    if(saveChar != NULL){
        while (saveChar[lastSize]!='\n') {
            lastSize++;
        }
        saveChar[lastSize] = '\0';
    }
    else{
        while (getchar() == '\n' ) {
            continue;
        }
		brdPuts("error", stdout);
        return inPutChar = NULL;
    }
    
    return inPutChar = saveChar;
}

int brdPuts(char * printChar,FILE * Stream){
    if (printChar != NULL) {
        fputs(printChar, Stream);
        putc('\n', Stream);
        return EXIT_SUCCESS;
    }
	else
	{
		brdPuts("failed",stdout);
	}
	perror("failed");
    return EOF;
}

int brdNewDocument(const char * name){
    
    if(name != NULL){ 
        if(access(name, 0) == -1){  //是否可读可写可运行
            if (mkdir(name, 0777)){
				//若失败返回错误
				perror("failed");
                return EXIT_FAILURE;
            }
        }
    }//如果输入文件夹名字正确就创建
    else{
		perror("failed");
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}

int brdNewTxt(const char * pathname, const char * textname) {
	int sizeOfPathName = 0;
	int sizeOfTextName = 0;
	if (pathname != NULL) {
		while (pathname[sizeOfPathName] != '\0')
		{
			sizeOfPathName++;
		}
	}
	else {
		perror("failed");
		return NULL;
	}
	if (textname != NULL)
	{
		while (textname[sizeOfTextName] != '\0')
		{
			sizeOfTextName++;
		}
	}
	else {
		perror("failed");
		return EXIT_FAILURE;
	}

	size_t pathSize = sizeOfPathName + sizeOfTextName + SIZE_OF__TXT + SIZE_OF__OBLIQUE_LINE;

	char *pathLocation = (char*) malloc( sizeof(char) * pathSize );//计算地址大小
	int pathCount = 0;//总计数
	int iCount = 0;//计数

	if ( access(pathname, 0) != -1)
	{
		for (pathCount = 0; pathCount < sizeOfPathName; pathCount++) {
			pathLocation[pathCount] = pathname[pathCount];
		}//地址中加入文件夹名称
		pathLocation[pathCount++] = 0134;
		pathLocation[pathCount++] = 0134;

		for (iCount = 0; pathCount < sizeOfPathName + 2 + sizeOfTextName  ; iCount++, pathCount++)
		{
			pathLocation[pathCount] = textname[iCount];
		}


		char txt[] = ".txt";
		for (iCount = 0; pathCount < sizeOfPathName + 2 + sizeOfTextName + 4; iCount++, pathCount++)
		{
			pathLocation[pathCount] = txt[iCount];
		}
		pathLocation[pathCount++] = '\0';//以防bug
	}
	else {
		perror("failed");
		return EXIT_FAILURE;
	}
	FILE *fp;
	if ((fp = fopen(pathLocation, "w")) == NULL) {
		perror("filed new file");
		return EXIT_FAILURE;
	}
	else {
		fprintf(fp, "创建成功");
	}
	fclose(fp);//关闭文件
	return EXIT_SUCCESS;
}

void wait_time(double seconds)
{
	Sleep(seconds);
	//time_t lastTime,nowTime;
	//double dif;
	//ctime(&lastTime);
	//while (1)
	//{
	//	ctime(&nowTime);
	//	if (difftime(&nowTime, &lastTime) >= seconds)
	//		return;
	//}
}
