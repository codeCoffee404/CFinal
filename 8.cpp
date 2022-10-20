#include<stdio.h>
//一球从100米高度自由落下，每次落地后反弹回原来高度的一半，再落下时，
//按照这个规律运动，试编程求它在第10次落地时，共经过多少米？第10次反弹会达到多高？
int main()
{
    float h=100,s=0;
    int i;
    for(i=1;i<=10;i++)
    {
        s=s+h+h/2;
        printf("第%d次s=%f\n",i,s);
        h=h/2;
    }
    printf("第10次落地时，共经过%f米。\n",s);
    printf("第10次反弹%f米。\n",h);
    return 0;
}

