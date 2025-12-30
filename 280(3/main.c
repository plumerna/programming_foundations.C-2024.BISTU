#include <stdio.h>
//给定正整数n，计算十进制下所有位置数字之和，
//并计算其平方的各位数字之和
int SeparateDigits(int num,int arr[]);
int main()
{
    int digits[20];
    int num,i;
    int numOfDigits;
    int ans=0;
    int squareAns=0;
    printf("请输入1-40000之间的任意一个整数：\n");
    scanf("%d",&num);
    if((num<1)||(num>40000))
    {
        printf("Output:\n您输入的数字不在规定范围内！\n");
    }
    else
    {
        numOfDigits=SeparateDigits(num,digits);
        ans=0;
        for(i=0;i<numOfDigits;i++)
        {
            ans+=digits[i];
        }
        numOfDigits=SeparateDigits(num*num,digits);
        squareAns=0;
        for(i=0;i<numOfDigits;i++)
        {
            squareAns+=digits[i];
        }
        printf("Output:\n%d的各位数之和为%d，%d平方后各位数之和为%d。\n",num,ans,num,squareAns);
    }
    return 0;
}

int SeparateDigits(int num,int arr[])
    {
        int numOfDigits=1;
        arr[0]=0;
        while(num)
        {
            arr[numOfDigits++]=num%10;
            num/=10;
        }
        return numOfDigits;
    }
