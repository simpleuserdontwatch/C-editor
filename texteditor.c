#include <stdio.h>
#include <stdlib.h>
int main()
{
   FILE *fptr;
   char path[2000];
   printf("Enter path of your new file:\n");
   scanf("%s",path);
   fptr = fopen(path,"w");
   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);
   }
   char str[90000];
   printf("Enter anything to write into %s (type ; to exit):\n", path);
   scanf("%[^;]s",str);
   printf("Writing to file....");
   fprintf(fptr,"%s",str);
   printf("Done!");
   fclose(fptr);
   return 0;
}