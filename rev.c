#include <stdio.h>
void reversenum() {
   int num, rev_num = 0, remainder;
   printf("Enter the number to reverse:\n ");
   scanf("%d", &num);
   while (num != 0) {
       remainder = num % 10;
       rev_num = rev_num * 10 + remainder;
       num = num / 10;
   }
   printf("The reversed number is: %d", rev_num);
 //  return 0;
}
