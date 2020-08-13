#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    float sw;
    scanf("%f%f%f",&a,&b,&c); 
    if(a!=b && a!=c && b!=c)
    {                                    
        if(a>b && a>c)                  
        {                              
            sw =b;
            if(b>c)
            {
                sw=b;
                printf("%.2f",sw);
            }
            else if(b<c)
            {
                sw=c;
                printf("%.2f",sw);
            }
        }
        else if(a>c && a<b)
        {
            sw =a;
            printf("%.2f\n",sw);
        }      
        else if(a<b && a<c)
        {
            sw=b;
            if(b>c)
            {
                sw=c;
            printf("%.2f\n",sw);
            }
            else if(c>b)
            {
                sw=b;
                 printf("%.2f\n",sw);
            }
        } 
        else if(a==b && a==c)
        {
            sw=a;
            printf("%.2f\n",sw);
        }
    }
    else if(a==b && b==c && a==c)
    {
        sw=a;
        printf("%.2f\n",sw);
    }
    else if(a==b && b!=c && a!=c)
    {
        if(a>=b && a>=c)                  
        {                               
            sw =c;
            printf("%.2f\n",sw);
           
        }
        else if(a<c && a<=b)
        {
            sw =a;
            printf("%.2f\n",sw);
        }      
    } 
    else if(a!=b && b==c && a!=c)
    {
        if(a>b && a>c)                  
        {                               
            sw =c;
            printf("%.2f\n",sw);
        }
        else if(a<b && a<c)
        {
            sw =a;
            printf("%.2f\n",sw);
        }      
    }
    else if(a!=b && b!=c && a==c)
    {
        if(a>b && b<c)                  
        {                               
            sw =b;
            printf("%.2f\n",sw);
        }
        else if(a<b && b>c)
        {
            sw =a;
            printf("%.2f\n",sw);
        }      
    }  
    return 0;
}
