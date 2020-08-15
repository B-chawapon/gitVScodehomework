#include<stdio.h>
#include<math.h>
int main()
{
    int distance,jump,slide;
   int jumpR=0;
   int sum=0;
   int i;
   scanf("%d%d%d",&distance,&jump,&slide);
   int change=jump-slide;
   for(i=1;i<=distance;i++)
   {
    if(jump>slide)
    {
        if(distance<=jump)
        {
            printf("%d",i);
            break;
        }
        jumpR+=jump;
        //printf("%d ",jumpR);
        if(jumpR>=distance)
        {
            printf("%d",i);
            break;
        }
        else
        {
            jumpR=jumpR-slide;
        }
    }
    else
    {
        printf("ERROR");
        break;
    }
    } 
return 0;
}