#include <stdio.h>
int main()
{   
    int i=0;
    int j=1;
    int sum=0;
    int count;
    int ans;
    int num[10010];
    scanf("%d",&count);
    if(2<=count &&count<=1000)
    {
        for(i=0;i<count;i++)
        {
            scanf("%d",&num[i]);
        }
        for(i=0;i<count;)
        {
            for(;j<count;j++)
            {
                if(num[i]==num[j])
                {
                    ans=num[i];
                    sum+=j;
                }
            }
            j=1;
            i++;
            j+=i;
        }
        printf("%d",ans);
       
        
    }
}