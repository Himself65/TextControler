//
//  AppControlMain.c
//  TextControler
//
//  Created by Himself65 on 2017/1/12.
//  Copyright © 2017年 Himself65. All rights reserved.
//

#include "AppControlMain.h"

int AppControlMain(){
    
    brd_puts("enter a word", stdout);
    
    char aWord[10];
    brd_gets(aWord, 10, stdin);
    brd_puts(aWord, stdout);
    return EXIT_SUCCESS;
}
