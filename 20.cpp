/*统计平均分，最高分及得最高分人数
请编写一个函数fun，函数的功能是：统计出若干个学生的平均成绩，最高分以及得最高分的人数。
函数接口定义：
float fun(float array[],int n);
其中array和n都是用户传入的参数。函数须统计array数组中学生的平均成绩，
最高分以及得最高分的人数，函数返回平均成绩，最高分以及得最高分的人数存放在全局变量Max和J中。
*/
#include <stdio.h>
float Max=0;
int J=0;
float fun(float array[],int n); //声明

int main()
{
    float  a[10],ave;
    int i=0;
    printf("请输入十个学生的成绩 用空格间隔开:");
    for(i=0;i<10;i++)
        scanf("%f",&a[i]);
    ave=fun(a,10); //主调
    printf("ave=%.2f\n",ave);
    printf("max=%.02f\n",Max);
    printf("Total:%d\n",J);
    return 0;
}

float fun(float array[],int n) 
{
    double f;
    int i,j=0;
    for(i=0;i<n;i++)
        f+=array[i]; //累加
    f=f/n;     //求平均
    for(i=1;i<n;i++)
    {
        if(array[j]<array[i]) //比较 取最大值的下标数
            j=i;
    }
    Max=(int)array[j]; //最高分
    for(i=0;i<n;i++)
        if(Max==(int)array[i])
            J++; //最高分人数
    return f;
}



