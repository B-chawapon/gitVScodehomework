#include<stdio.h>
#include<math.h>
int main()
{
    int num,ans,temp;
    int pos;
    int power=0;
    float sum=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    if(num>=0 && num<10000000)
    {
        pos=num;
        ans=num;
        for(pos=num;pos!=0;power++)    
        {    
            pos /=10;
        }
        for(pos=num;pos!=0;pos/=10)
        {
            temp = pos%10;
            sum+=pow(temp,power);
        }
        if(sum==ans)
        {
            printf("Yes");
        } 
        else
        {
            printf("No");
        }
    }
    else
    {
        printf("error");
    }
    return 0;
}