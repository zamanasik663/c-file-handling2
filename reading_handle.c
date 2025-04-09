#include<stdio.h>
#include<string.h>



int main()
{
    char ch[50];
   FILE *fp;
   
   fp = fopen("writting.txt","r");

   if(fp == NULL){
      printf("can't file opened.");
   }

   /*
    this used by fgetc
   */
//    while(1){
//      ch = fgetc(fp);
//      if(ch == EOF)
//       break;
     
//      printf("%c",ch);
//    }
//    printf("\n");
//   fclose(fp);

/*
this used by fgets()
*/

while(fgets(ch,50,fp) != NULL){
   printf("%s",ch);
}

fclose(fp);

    return 0;
}