#include<stdio.h>
#define checka if(a>b && a>c && a>d)
#define checkb if(b>a && b>c && b>d)
#define checkc if(c>a && c>b && c>d)
#define checkd if(d>a && d>b && d>c)
void main()
{
    int a,b,c,d;
    printf("enter the value of a,b,c and d:");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    checka
    printf("largest no. is %d",a);
    checkb
    printf("largest no. is %d",b);
    checkc
    printf("largest no. is %d",c);
    checkd
    printf("largest no. is %d",d);

}
