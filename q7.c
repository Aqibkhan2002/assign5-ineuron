#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    printf("%d\n",(2*n)+2-(2*i));

    return 0;
}