#include<stdio.h>
#include<math.h>
int main()
{
    float num1st,num2nd;
    float sum=0;
    float averange;
    int i=0;
    float sumpow2=0;
    float numpow2[50];
    float averangesd;
    float num[50];
    float countsd;
    float sd;
    scanf("%f %f",&num1st,&num2nd);
if(num1st>num2nd)
   {
       float countnumber= ((num1st-num2nd)+1);
       printf("%.0f\n",countnumber);
       for(;num1st>=num2nd;num1st--)
       {
          
           for(;i<countnumber;)
           {
              
               num[i]=num1st;
               printf("%.0f %d ",num[i],i);
               break;
            }
           
            sum+=num[i];
            i++;
       }
        printf("\n%.0f\n",sum);
       averange=sum/countnumber;
       printf("%.1f\n",averange);
       for(i=0;i<countnumber;i++)
       {
          numpow2[i]=((num[i])-averange)*((num[i])-averange);
          sumpow2+=numpow2[i];
       }
        printf("%f",sumpow2);
        countsd=countnumber-1;
        averangesd=sumpow2/countsd;
        sd =sqrt(averangesd);
        printf("\n%.2f",sd);
    }
    else if(num1st<num2nd)
    {
        float countnumber= ((num2nd-num1st)+1);
       printf("%.0f\n",countnumber);
       for(;num2nd>=num1st;num1st++)
       {
          
           for(;i<countnumber;)
           {
              
               num[i]=num1st;
               printf("%.0f %d ",num[i],i);
               break;
            }
           
            sum+=num[i];
            i++;
       }
        printf("\n%.0f\n",sum);
       averange=sum/countnumber;
       printf("%.1f\n",averange);
       for(i=0;i<countnumber;i++)
       {
          numpow2[i]=((num[i])-averange)*((num[i])-averange);
          sumpow2+=numpow2[i];
       }
        printf("%f",sumpow2);
        countsd=countnumber-1;
        averangesd=sumpow2/countsd;
        sd =sqrt(averangesd);
        printf("\n%.2f",sd);
    }
    
   
    
    return 0;
}