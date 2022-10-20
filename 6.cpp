#include <stdio.h>
/*

某学校需要搬运图书，已知男教师一人搬3箱子，女教师一人搬2箱，学生两人搬一箱。
问用45人正好搬45块箱，有多少种搬法？（每人至少搬1箱）
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
    printf("有%d种搬法\n",count);
    return 0;
}


