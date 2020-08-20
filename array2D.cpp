#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j;
    int max=0;
    int score[5][4];
    int total[5]={0};
    int winner;
    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&score[i][j]);
            if (score[i][j]>=1 && score[i][j]<=5)
            {
                total[i]+=score[i][j];
            }
            else
            {
                printf("Error\n");
                exit(1);
            }
        }
        if(total[i]>max)
        {
            max=total[i];
            winner=i+1;
        }
    }
   printf("%d %d",winner,max);
    
    return 0;
}