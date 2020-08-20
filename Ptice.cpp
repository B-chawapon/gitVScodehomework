#include<stdio.h>
int main()
{
    int count;
    scanf("%d",&count);
    char ch[101];
    int i=0;
    int j=1;
    int adrian=0;
    int bruno=0;
    int goran=0;
    int mod3[100],mod4[100],mod6[100];
    scanf("%s",ch);
    for(i=0;i<count;i++)
    {
        //adrian
        mod3[i]=i%3;
        if(mod3[i]==0)
        {
            if(ch[i]=='A')
            {
                adrian++;
            }
        }
        else if(mod3[i]==1)
        {
            if(ch[i]=='B')
            {
                adrian++;
            }
        }
        else if(mod3[i]==2)
        {
             if(ch[i]=='C')
            {
                adrian++;
            }
        }
        //bruno
        mod4[i]=i%4;
        if(mod4[i]==0 ||mod4[i]==2)
        {
            if(ch[i]=='B')
            {
                bruno++;
            }
        }
        else if(mod4[i]==1)
        {
            if(ch[i]=='A')
            {
                bruno++;
            }
        }
        else if(mod4[i]==3)
        {
            if(ch[i]=='C')
            {
                bruno++;
            }
        }
         //goran
        mod6[i]=i%6;
        if(mod6[i]==0 ||mod6[i]==1)
        {
            if(ch[i]=='C')
            {
                goran++;
            }
        }
        else if(mod6[i]==2 ||mod6[i]==3)
        {
            if(ch[i]=='A')
            {
                goran++;
            }
        }
        else if(mod6[i]==4 ||mod6[i]==5)
        {
            if(ch[i]=='B')
            {
                goran++;
            }
        }
    }
    printf("%d\n",adrian);
    printf("%d\n",bruno);
    printf("%d\n",goran);
    return 0;

}