#include<stdio.h>
int	main()
{
	   int pos=1;
       int i,j;
	   char ch[100];
	   scanf("%s",ch);
	for(i=0;i<100;i++)
	{
        if(ch[i]=='A')
           {
	        if(pos== 1)
	        {
	           pos= 2;
	        }
	        else if(pos== 2)
            {
               pos= 1;	
            }        
	       }
	       else if(ch[i]=='B')
	       {
	        if(pos== 3)
	        {
	          pos= 2;
	        }
             else if(pos== 2)
            {
               pos= 3;
	        }
	       }
	       else if(ch[i]=='C')
	       {
	        if(pos== 1)
	        {
	            pos= 3;
	        }
	        else if(pos== 3)
	        {
	            pos= 1;
	        }
	       }         
	   }      
	printf("%d",pos); 
    return 0;	    
}