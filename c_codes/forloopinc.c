#include <stdio.h>
#include <string.h>
/*For each integer  in the interval  (given as input) :

If 1<= n<=9, then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if n>9 and it is an even number, then print "even".
Else if n>9 and it is an odd number, then print "odd".*/

#include <math.h>
#include <stdlib.h>
int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    char ar[10][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    for(int i=a;i<=b;i++)
    {
        if(i<10)
        printf("%s\n",ar[i]);
        else
        {
            if(i%2==0)
            printf("even\n");
            else
            printf("odd\n");
        }
    }
    return 0;
}

