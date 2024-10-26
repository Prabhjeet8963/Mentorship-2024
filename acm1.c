/*#include <stdio.h>

int main() 
{    
    int n,fac=1;
    printf("enter a integer ");
    scanf("%d",&n);
    for(int i =n;i>1;i--)
    fac=fac*i;
    printf("%d ! is equals to %d",n,fac );
    return 0;
   
}*/
#include <stdio.h>
 int fac (int n)
 {
    if (n>0)
    return n* fac (n-1);
    else return 1;
 }
int main() 
{    
    int n;
    printf("Enter a number to take out factorial: ");
    scanf("%d",&n);
    printf("%d ! is equals to %d",n,fac(n));
    return 0;
}
