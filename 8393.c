#include <stdio.h>
int main(void)
{
    int a=0,n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        a+=i;
    }
    printf("%d",a);
    return 0;
}
