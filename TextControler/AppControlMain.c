//
//  AppControlMain.c
//  TextControler
//
//  Created by Himself65 on 2017/1/12.
//  Copyright © 2017年 Himself65. All rights reserved.
//

#include "AppControlMain.h"

int AppControlMain(){
    
//    brd_puts("enter a word", stdout);
//    
//    char aWord[10];
//    brd_gets(aWord, 10, stdin);
//    brd_puts(aWord, stdout);
    
    
    brd_newDocument("hello");
    FILE * file = brd_newTxt("hello", "fuck");

    
//    int one = 1;
//    int two = 2;
//    
//    int shit = one + two;
//    char fuck[shit];
//    for (int i = 0; i < shit; i++) {
//        fuck[i] = ('u');
//    }
//    
//    printf("%s",fuck);
//    printf("\n");
    
    return EXIT_SUCCESS;
}
