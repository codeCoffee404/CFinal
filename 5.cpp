#include <stdio.h>
#include <math.h>
/*

��ax2+bx+c=0���̵Ľ⣬Ҫ��
(1)	a��0�����Ƕ��η��̡�
(2)	b2��4ac��0����������ͬ��ʵ����
(3)	b2��4ac>0�����������ȵ�ʵ����
(4)	b2��4ac<0������������ĸ�����



*/ 
int main()
{
    double a,b,c,d,x1,x2; //d���洢�����ʽ��ֵ
    printf("�����뷽��ϵ��a,b,c��ֵ��");
    scanf("%lf %lf %lf",&a,&b,&c);
    d = b*b-4*a*c;  //�����ʽ
    if(a==0)
    {
        printf("�ⲻ�Ƕ��η���");
    }else{
        if(d==0)
        {
            x1=x2=(-b)/(2*a);
            printf("�������������ʵ�� x1=x2=%5.2f\n",x1);
        }else if(d>0)
        {
            x1=(-b+sqrt(d))/(2*a);
            x2=(-b-sqrt(d))/(2*a);
            printf("���������������ʵ�� x1=%5.2f,x2=%5.2f\n",x1,x2);
        }else printf("��������������ĸ���\n");
    }
    return 0;
}


