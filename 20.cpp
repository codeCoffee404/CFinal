/*ͳ��ƽ���֣���߷ּ�����߷�����
���дһ������fun�������Ĺ����ǣ�ͳ�Ƴ����ɸ�ѧ����ƽ���ɼ�����߷��Լ�����߷ֵ�������
�����ӿڶ��壺
float fun(float array[],int n);
����array��n�����û�����Ĳ�����������ͳ��array������ѧ����ƽ���ɼ���
��߷��Լ�����߷ֵ���������������ƽ���ɼ�����߷��Լ�����߷ֵ����������ȫ�ֱ���Max��J�С�
*/
#include <stdio.h>
float Max=0;
int J=0;
float fun(float array[],int n); //����

int main()
{
    float  a[10],ave;
    int i=0;
    printf("������ʮ��ѧ���ĳɼ� �ÿո�����:");
    for(i=0;i<10;i++)
        scanf("%f",&a[i]);
    ave=fun(a,10); //����
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
        f+=array[i]; //�ۼ�
    f=f/n;     //��ƽ��
    for(i=1;i<n;i++)
    {
        if(array[j]<array[i]) //�Ƚ� ȡ���ֵ���±���
            j=i;
    }
    Max=(int)array[j]; //��߷�
    for(i=0;i<n;i++)
        if(Max==(int)array[i])
            J++; //��߷�����
    return f;
}



