#include <stdio.h>
#include <math.h>
/*

求ax2+bx+c=0方程的解，要求
(1)	a＝0，不是二次方程。
(2)	b2－4ac＝0，有两个相同的实根。
(3)	b2－4ac>0，有两个不等的实根。
(4)	b2－4ac<0，有两个共轭的复根。



*/ 
int main()
{
    double a,b,c,d,x1,x2; //d来存储求根公式的值
    printf("请输入方程系数a,b,c的值：");
    scanf("%lf %lf %lf",&a,&b,&c);
    d = b*b-4*a*c;  //求根公式
    if(a==0)
    {
        printf("这不是二次方程");
    }else{
        if(d==0)
        {
            x1=x2=(-b)/(2*a);
            printf("方程有两个相等实根 x1=x2=%5.2f\n",x1);
        }else if(d>0)
        {
            x1=(-b+sqrt(d))/(2*a);
            x2=(-b-sqrt(d))/(2*a);
            printf("方程有两个不相等实根 x1=%5.2f,x2=%5.2f\n",x1,x2);
        }else printf("方程有两个共轭的复根\n");
    }
    return 0;
}


