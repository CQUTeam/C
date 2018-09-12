#include <stdio.h>
#include <stdlib.h>

int main()
{   int num,b;
    char ch;
    printf("请输入一个大写字母：");
    scanf("%c",&ch);
    while(ch<65||ch>90)
    {
    printf("输入错误，请输入大写字母：");
    ch=scanf("%c",&ch);
    printf("\n");
//    if (ch>=65&&ch<=90)break;
    }
    num =(int) (ch-'A'+1);
    for(int i=1;i<=num;i++)
        {for(int a= 1;a<=num-i;a++)printf(" ");
        for( b= 1 ; b<=i ;b++)
        {printf("%c",ch-num+b);
        }
        for(int c = 1 ;c <= i-1;c++)
        {printf("%c",(ch-num+b-c-1));
        }
        printf("\n");
        }
    printf("Hello world!\n");
    return 0;

}
