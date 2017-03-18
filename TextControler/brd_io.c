#include "brd_io.h"

char * brdGets(char * inPutChar,const int size ,FILE * Stream){ 
    char * saveChar = inPutChar;
    int i = 0;

    fgets(saveChar, size, Stream);

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
    return EOF;
}


int brdNewDocument(const char * name){
    //如果输入文件夹名字正确则开始创建
    if(name != NULL){
        if(access(name, 0) == -1){  //是否可读可写可运行
            if (mkdir(name, 0777)){
				//若失败返回错误
                return EXIT_FAILURE;
            }
        }
    }
    else{

        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}

FILE * brdNewTxt(const char * pathname,const char * textname){
    FILE *fp; //文件数据
    
    int sizeOfpathname = 0;
    int sizeOftextname = 0;
    //计算pathname的大小
    while (pathname[sizeOfpathname] != '\0') {
        sizeOfpathname++;
    }
    //计算textname的大小
    while (textname[sizeOftextname] != '\0') {
        sizeOftextname++;
    }
    
    //计算总共大小
    const int sumSizeOfname =- sizeOftextname + sizeOfpathname + SIZE_OF__OBLIQUE_LINE + SIZE_OF__TXT;
    
    //初始化txt的名字
	char *localname = (char *)malloc(sizeof(char) * sumSizeOfname);
    if (pathname != NULL && textname != NULL) {
        int i = 0;
        if (access(pathname, 0) != -1) {
			for (i = 0; i < sizeOfpathname; i++);
			{
				localname[i] = pathname[i];
            }
            
            //加上 //
            localname[i++] = '/';
            localname[i++] = '/';
            
            //赋值txt的名字
            int j = 0;
            for (; i < sizeOftextname + sizeOfpathname + 2; i++,j++) {
                localname[i] = textname[j];
            }
            
            //加上.txt后缀
            j = 0;
            char ichar[] = (".txt");
            for (; i< sizeOfpathname + sizeOftextname + 6; i++,j++) {
                localname[i] = ichar[j];
            }
            //名字结尾，以防bug
            localname[++i] = '\0';
        }
        else{
            //pathname和txtname错误则输出问题
            printf("brd_newTxt failed\n");
            return NULL;
        }
        
        if((fp=fopen(localname,"w")) == NULL)//打开文件 没有就创建
        {
            printf("创建失败\n");
            
        }
		else{
			time_t nowTime = time(nowTime);
			fprintf(fp,"创建成功");//成功创建
			fclose(fp);//关闭文件
		}
    }
    return fp;//返回文件数据
}