#include "stdio.h"
#include "string.h"
int Isop(char x)
{
    if(x=='+'||x=='-'||x=='*'||x=='/')
        return 1;
    return 0;
}
int priority(char x)
{
    switch(x)
    {
        case '+':
        case '-': return 1;
        case '*':
        case '/': return 2;
    }
}

int compute(int a,char x,int b)
{
    switch(x)
    {
        case '+': return a+b;
        case '-': return a-b;
        case '*': return a*b;
        case '/': return a/b;
    }
}
int main()
{
    int a,b,c;
    char op1,op2;
    a=0;
    op1='+';
    scanf("%d",&b);
    while(1)
    {
        op2=getchar();
        if(op2=='=') break;
        else
            scanf("%d",&c);
        if(!Isop(op2))
        {
            printf("error\n");
            return 0;
        }
        else
        {
            if(priority(op1)>=priority(op2))
            {
                if(op1=='/'&&b==0)
                {
                    printf("divided by 0\n");
                    return 0;
                }
                a=compute(a,op1,b);
                op1=op2;
                b=c;
            }
            else
            {
                if(op2=='/'&&c==0)
                {
                    printf("Divided by 0");
                    return 0;
                }
                b=compute(b,op2,c);
            }
        }
    }
     if(op1=='/'&&b==0)
    {
        printf("Divided by 0");
        return 0;
    }
    a=compute(a,op1,b);
    printf("%d\n",a);
    return 0;
}
