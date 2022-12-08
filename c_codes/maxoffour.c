/*Write a function 
int max_of_four(int a, int b, int c, int d)
 which reads four arguments and returns the greatest of them.*/
#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a,int b,int c,int d)
{
    int x=max(a,b);
    int y=max(c,d);
    return max(x,y);
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}