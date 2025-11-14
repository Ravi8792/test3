#include <stdio.h>
void fibbonaci() {
   int i, n;
   int t1 = 0, t2 = 1;
   int nextTerm = t1 + t2;
   printf("\n\nEnter the number of terms:\n ");
   scanf("%d", &n);
   printf("Fibonacci Series: %d, %d,\n\n ", t1, t2);
   for (i = 3; i <= n; ++i) {
       printf("%d, ", nextTerm);
       t1 = t2;
       t2 = nextTerm;
       nextTerm = t1 + t2;
   }
 //  return 0;
}
