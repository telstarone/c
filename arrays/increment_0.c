#include<stdio.h>
int main()
{
   int a, b, c;
   int arr[5] = {1, 2, 5, 25, 7};
   
   a = ++arr[1];
   printf("%d\n", a);
   printf("%d\n", arr[1]);
   
   b = arr[1]++;
   printf("%d\n", b);
   printf("%d\n", arr[1]);
   
   c = arr[++a];
   printf("%d\n", c);

   printf("\n");
   
   printf("%d ,%d ,%d\n", a, b, c);

   return 0;
}