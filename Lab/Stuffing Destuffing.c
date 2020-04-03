#include<stdio.h>
#include<stdlib.h>
int main()
{
char *p,*q;
char temp;
char in[100];
char stuff[100];
char destuff[100];
int count=0;
printf("enter the input character string (0‘s & 1‘s only):\n");
scanf("%s",in);
p=in;
q=stuff;
while(*p!='\0')
{
    if(*p=='0')
    {
        *q=*p;
        q++;
        p++;
    }
    else
    {
        while(*p=='1' && count!=5)
        {
            count++;
            *q=*p;
            q++;
            p++;
        }
        if(count==5)
        {
            *q='0';
            q++;
        }
        count=0;
    }
}
*q='\0';
printf("\nthe stuffed character string is");
printf("\n%s",stuff);
p=stuff;
q=destuff;
while(*p!='\0')
{
    if(*p=='0')
    {
        *q=*p;
        q++;
        p++;
    }
    else
    {
        while(*p=='1' && count!=5)
        {
            count++;
            *q=*p;
            q++;
            p++;
        }
        if(count==5)
        {
            p++;
        }
        count=0;
    }
}
*q='\0';
printf("\nthe destuffed character string is");
printf("\n%s\n",destuff);
return 0;
}

/*
enter the input character string (0‘s & 1‘s only):                                                                              
100111110010                                                                                                                    
                                                                                                                                
the stuffed character string is                                                                                                 
1001111100010                                                                                                                   
the destuffed character string is                                                                                               
100111110010                                                                                                                    
                                                                                                                                
           
*/
