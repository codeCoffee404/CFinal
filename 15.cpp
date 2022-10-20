//定义函数int get_count(char *name)计算字符串name的长度，并返回结果。
//在main函数中定义一个字符数组，输入若干个字符，调用函数get_count计算字符串的长度，
//并输出其计算结果。
#include <stdio.h>
#include <string.h>
    int get_count(char *name){//接收指针 
  int length,i,count; 
  length=strlen(name);//判断数组的长度 
  for(i=0;i<length;i++){ 
  if(name[i]>='a'&&name[i]<='z'||name[i]>='A'&&name[i]<='Z'){//判断是不是满足要求的字符 
  count++;//字符加1 
  
  }
  
  }
  return count;
  
  } 
  
  int main(){
  char s[80];
  int count;//定义变量 
  scanf("%s",s);//输入要判断的字符串 
  count=get_count(s);//调用函数，返回数值 
  printf("%d",count);//输出 
  }

