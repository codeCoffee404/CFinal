#include <stdio.h>
/*

ĳѧУ��Ҫ����ͼ�飬��֪�н�ʦһ�˰�3���ӣ�Ů��ʦһ�˰�2�䣬ѧ�����˰�һ�䡣
����45�����ð�45���䣬�ж����ְᷨ����ÿ�����ٰ�1�䣩
*/
int main()
{
    int n=45,count=0; 
    int man,women,child;;
    for(man=0;man<=n/3;man++)
        for(women=0;women<=n/2;women++)
            for(child=0;child<=n*2;child++)
    {
        if(man+women+child == n && child%2==0 && 3*man+2*women+child/2==n && man!=0 && women!=0 && child!=0) 
            count++;
    }
    printf("��%d�ְᷨ\n",count);
    return 0;
}


