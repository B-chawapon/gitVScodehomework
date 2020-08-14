#include<stdio.h>
#include<math.h>
int main()
{
    
    int i=0;
    int distance,jump,slide;
   int jumpR;
   int sum=0;
   scanf("%d%d%d",&distance,&jump,&slide);
    if(jump>slide)
    {
        if(distance<=jump)
        {
            printf("1");
        }
        else if(distance>jump)
        {
            for(i=0;i<distance;i++)
            {
            int r
            r=jump-slide;
            jumpR=r+jump;
            sum+=i;
           if(jumpR>=distance)
           {
               printf("%d",sum);
           }
           
            }   
        }
    }
    
return 0;
}