// https://youtu.be/HQNsriyMhtY?si=SERdannWLF7KKR3H
// File Access Basics | C Programming Tutorial
// Portfolio Courses
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(void)
{
    FILE *fh_output;
    fh_output=fopen("io.txt","w"); //w=write, a=append
    /*
    fputs("abc", fh_output);
    fputs("123\n",fh_output);
    fputs("A string\n", fh_output);
    int data = 5;
    fprintf(fh_output,"data: %d\n",data );
    */
   int input = 0;
   while(true)
   {
    printf("Enter #1 (-1 to quit): ");
    scanf("%d", &input);
    if (input== -1) break;
    else fprintf(fh_output,"%d\n",input);
    
   }
    fclose(fh_output);
   FILE *fh_input;
   fh_input = fopen("io.txt","r"); //r=read

   int finput=0;
   int lines = 0;
   int numbers[100];

//    fscanf(fh_input,"%d", &finput);
   while (fscanf(fh_input,"%d", &finput) != EOF)
   {
        numbers[lines]=finput;
        printf("file line %d: %d\n", lines+1, finput);      /* code */
        lines++;
   }
   
    
    fclose(fh_input);
    fh_input=fopen("in.txt","r");
    
    char buffer[256];
    fgets(buffer,256,fh_input);
    printf("Buffer: %s\n",buffer);

    fclose(fh_input);

    return 0;
}