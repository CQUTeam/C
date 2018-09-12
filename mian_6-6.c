/*绗?鍏?绔犺妭 缂栫▼缁冧範 鈥斺�?6.6*/

#include"stdio.h"
#include "stdlib.h"

int main(void)
{   
    int a=0,b=0,i;
    printf("请输入上下限用逗号隔开：");
    scanf("%d,%d",&a,&b);
    for( i=a;i<=b;i++)
    {
    printf("%5d %5d %5d\n",i,i*i,i*i*i);
     }
    /* code */
    getchar();
    while(1);
    return 0;
}
