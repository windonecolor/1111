#include <stdio.h>

int main() {
   char s1[8];    
   char s2[8];                
   printf("Vui long nhap chuoi : ");
   scanf("%s",s1);
   int length = 0;
   int loop = 0;

   while(s1[length] != 0) {
      length++;
   }

   printf("\nIn chuoi theo chieu dao nguoc: \n");
   for(loop = --length; loop>=0; loop--)
      printf("%c", s1[loop]);

   return 0;
}
