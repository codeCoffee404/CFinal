/*
����ѧ���ɼ�����һ���ṹ�����ͣ�
����������Ա��ѧ��������ѧ��ѧ�ź�5�ſγ̳ɼ�����ṹ�����Ͷ������£�
struct  student
{
	char  name[10];  //����
	char  num[10];  //ѧ��
	float  score[5];  //5�Ƴɼ� 
};
��д�����ɼ�������10��ѧ����������ѧ�ź�5�Ƴɼ���
���㲢���ÿλѧ����������ѧ��ѧ�ź�ƽ���ɼ���ƽ���ɼ�������λС����




*/
#include <stdio.h>
struct student    //����ṹ���������ʼ�� 
{
    char num[10];
    char name[10];
    float score[5];
} stu[10];
void printf();    //����������� 
int main()
{
    int i,j;
    for(i=0;i<=9;i++)
    {
        printf("�������%d��ѧ����ѧ�ţ�������������\n",i+1);
        scanf("%s %s",&stu[i].num,stu[i].name);    //����ѧ�ź����� 
        for(j=0;j<=4;j++)
        scanf("%f",&stu[i].score[j]);    //����5�ſεĳɼ� 
    } 
    printf(); 
}
void printf()
{
    int i;
    printf("------------------------------\n");
    printf("ѧ��\t����\tƽ���ɼ�\n");
    for(i=0;i<=9;i++)
    {
        printf("%s\t%s\t%0.2f\n",stu[i].num,stu[i].name,(stu[i].score[0]+stu[i].score[1]+stu[i].score[2]+stu[i].score[3]+stu[i].score[4])/5);
    }
} 


