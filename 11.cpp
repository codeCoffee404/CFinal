#include <stdio.h>
//11.�Ա�д����ʵ�����������������Լ����շת��� 
int main()
{
    int m = 0;
    int n = 0;
    int tmp = 0;
    printf("��������������: ");
    scanf("%d %d", &m, &n);

    while (tmp = m % n)
    {
        m = n;
        n = tmp;
    }
    printf("���Լ��Ϊ:%d\n", n);
    return 0;
}

