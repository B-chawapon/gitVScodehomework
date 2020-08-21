#include<stdio.h>
#include<string.h>
int main()
{
    char text[101];
   scanf("%[^\n]s",&text);
    int i=0;
    for(i=0;i<strlen(text);)
    {
        if(text[i]=='a'||text[i]=='e'||text[i]=='i'||text[i]=='o'||text[i]=='u')
        {
            printf("%c",text[i]);
            i+=3;
          
        }
       else
        {
            printf("%c",text[i]);
            i++;
        }
        
 }

}