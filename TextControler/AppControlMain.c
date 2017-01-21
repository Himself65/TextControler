//
//  AppControlMain.c
//  TextControler
//
//  Created by Himself65 on 2017/1/12.
//  Copyright © 2017年 Himself65. All rights reserved.
//

#include "AppControlMain.h"

int AppControlMain(){
    brd_puts("文件管理beta 0.1", stdout);
    
    
    
    brd_puts("[1]创建文件夹", stdout);
    brd_puts("[2]创建文件", stdout);
    brd_puts("[0]退出程序", stdout);
    for (; ; ) {
        brd_puts("输入操作", stdout);
        int operate = 0;
        scanf("%d",&operate);
        fflush(stdin);
        char pathname[256],txtname[256];
        for(;;){
            if (operate) {
                if (operate == 1) {
                    brd_puts("enter the pathname", stdout);
                    brd_gets(pathname, 256, stdin);
                    brd_newDocument(pathname);
                }
                else if(operate == 2){
                    brd_puts("enter the txtname", stdout);
                    brd_gets(txtname, 256, stdin);
                    brd_newTxt(pathname, txtname);
                }
                else if(operate == 0){
                exit(EXIT_SUCCESS);
                }
                else{
                    brd_puts("输入错误", stdout);
                }
            }
        }
    }
    return EXIT_SUCCESS;
}
