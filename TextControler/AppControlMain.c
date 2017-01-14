//
//  AppControlMain.c
//  TextControler
//
//  Created by Himself65 on 2017/1/12.
//  Copyright © 2017年 Himself65. All rights reserved.
//

#include "AppControlMain.h"

int AppControlMain(){
    
    char pathname[256],txtname[256];
    
    brd_puts("enter the pathname", stdout);
    brd_gets(pathname, 256, stdin);
    
    brd_puts("enter the txtname", stdout);
    brd_gets(txtname, 256, stdin);
    
    brd_newDocument(pathname);
    brd_newTxt(pathname, txtname);
    
    return EXIT_SUCCESS;
}
