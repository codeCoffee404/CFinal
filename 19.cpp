/*
计算学生成绩：有一个结构体类型，
包含三个成员：学生姓名、学生学号和5门课程成绩，其结构体类型定义如下：
struct  student
{
	char  name[10];  //姓名
	char  num[10];  //学号
	float  score[5];  //5科成绩 
};
编写程序由键盘输入10个学生的姓名、学号和5科成绩，
计算并输出每位学生的姓名、学生学号和平均成绩，平均成绩保留两位小数。




*/
#include <stdio.h>
struct student    //定义结构体变量并初始化 
{
    char num[10];
    char name[10];
    float score[5];
} stu[10];
void printf();    //定义输出函数 
int main()
{
    int i,j;
    for(i=0;i<=9;i++)
    {
        printf("请输入第%d个学生的学号，姓名，分数：\n",i+1);
        scanf("%s %s",&stu[i].num,stu[i].name);    //输入学号和姓名 
        for(j=0;j<=4;j++)
        scanf("%f",&stu[i].score[j]);    //输入5门课的成绩 
    } 
    printf(); 
}
void printf()
{
    int i;
    printf("------------------------------\n");
    printf("学号\t姓名\t平均成绩\n");
    for(i=0;i<=9;i++)
    {
        printf("%s\t%s\t%0.2f\n",stu[i].num,stu[i].name,(stu[i].score[0]+stu[i].score[1]+stu[i].score[2]+stu[i].score[3]+stu[i].score[4])/5);
    }
} 


