/*---------------------------------------*/
/*Copyright 2019-2020                    */
/*                                       */
/* FILE NAME             :menu.c         */
/* PRINCIPAL AUTHOR      :Tristan        */
/* SUBSYSTEM             :menu           */
/* MODULE NAME           :menu           */
/* LANGUAGE              :c              */
/* TARGET ENVIRONMENT    :ANY            */
/* DATE OF FIRST RELEASE :2019/12/22     */
/* DESCRIPITION          :A menu program */
/*---------------------------------------*/

/*
 *  * Revision log:
 *   *
 *    * Created by Mengning, 2019/12/22
 *     *
 *      */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void help();
void version();
int main()
{
    char cmd[100];
    char cmd_list[100][100];
    strcpy(cmd_list[0],"help");
    strcpy(cmd_list[1],"version");
    strcpy(cmd_list[2],"exit");
    printf("please input your command");
    scanf("%s",cmd);
    while (1)
    {
        if (strcmp(cmd,cmd_list[0])==0)
        {
            help();
        }
        else if (strcmp(cmd,cmd_list[1])==0)
        {
            version();
        }
        else if (strcmp(cmd,cmd_list[2])==0)
        {
            exit(0);
        }
        else
        {
            printf("your input is a command");
        }
        printf("please input your command again");
        scanf("%s",cmd);
    }
    return 0;
}
void help()
{
    printf("Menu List:\n");
    printf("help\n");
    printf("version\n");
    printf("exit");
}
void version()
{
    printf("version:1.0");
}
