//writting to afile
#include<stdio.h>
#include<string.h>

int main()
{
   FILE *fp;
   char ch[100];
   fp = fopen("writting.txt","r"); 
   if(fp == NULL){
     printf("file can't opened\n");
   }
   while(fgets(ch,100,fp) != NULL)
   {
      printf("%s",ch);
   }

    
  
    
   fclose(fp);



    return 0;
}