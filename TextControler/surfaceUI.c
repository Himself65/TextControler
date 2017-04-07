#pragma once
#include"surfaceUI.h"

void interfaceUI(void)
{
	int first = 1;
	for (;;) 
	{
		if (first == 1) {
			printf("！！！！！！！！！！！！！！！！\n");
			printf("！！！！！！！！！！！！！！！！\n");
			printf("！！！！！！！！！！！！！！！！\n");
			printf("！！！！！！散哭聞喘！！！！！！\n");
			printf("！！！！！！！！！！！！！！！！\n");
			printf("！！！！！！！！！！！！！！！！\n");
			printf("！！！！！！！！！！！！！！！！\n");
			first = 0;
			wait_time(3);
		}
		else
		{
			printf("！！！！！！！！！！！！！！！！\n");
			printf("！！！！！！！！！！！！！！！！\n");
			printf("！！！！！！！！！！！！！！！！\n");
			printf("！！！！補秘\"1\"幹秀猟周斜！！！！\n");
			printf("！！！！補秘\"2\"幹秀猟周！！！！！\n");
			printf("！！！！！！！！！！！！！！！！\n");
			printf("！！！！！！！！！！！！！！！！\n");
			getchar();
		}
	}
}