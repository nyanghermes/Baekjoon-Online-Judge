#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);//%d: 10진수(정수형) %f: 실수형 %e: 지수형 %o: 8진수 %x: 16진수 %u: 부호없는 10진수 %g: 실수형 자동출력 %p: 포인터의 주소 %c: 하나의 문자로 출력 %s: 문자열
    if(a<b)
        printf("<\n");
    else if(a>b)
        printf(">\n");
    else
        printf("==");
    return 0;       
}
