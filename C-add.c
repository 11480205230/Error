#include <stdio.h>

int main()
{
    //both of them should be initilized!
    int a;
    int b;

    printf("��������������\n");
    scanf("%d,%d",&a,&b);	//if you add something in %d %d,you should have it in place when you do some input!
    printf("����֮��Ϊ%d+%d=%d\n",a,b,a+b);//As the variable is not initialized,if you input non-number,it might dont't work for u!

    return 0;
}
