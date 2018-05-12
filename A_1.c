
#include <stdio.h>
#include<string.h>
int palindrome(char str[100],int begin,int end);

int main()
{
    int begin,end,len;
    char str[100];
    printf("enter the string");
    scanf("%s",&str);
    len=strlen(str);
    end=len-1;
    if(palindrome(str,begin,end))
    printf("\n palindrome");
    else
    printf("\n not a palindrome");
    return 0;
}

int palindrome(char str[100],int begin,int end)
{
    if(end==begin)
    return 1;
    if(str[begin]!=str[end])
    return 0;
    if(begin<end+1)
    return(str,begin+1,end-1);
    return 1;
}
