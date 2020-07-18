//Demonstrates how to write data to a text file
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void)
{
    char *p_string1;
    p_string1 = "This is a test to print out a string to a specified file";

    FILE *fp;
    fp = fopen("kamfile7.txt","w");
    if(fp!=NULL)
    {
        fputs("\n\n",fp);
        fputs("fopen OK\n\n",fp);
    }
    else
    {
        fprintf(stderr,"Error opening file %s",fp);
        exit(1);
    }

    //print out a line to stdout
    printf("\n");
    printf("\nPrinting... %s",p_string1);
    printf("\n\n");
    //print out a line to the text file
    fprintf(fp,"\n");
    fprintf(fp,"\nPrinting... %s",p_string1);
    fprintf(fp,"\n\n");

    //not sure if I need to close file or not before exiting/returning from pgm

    return 0;

}
