#include <stdio.h>  
int main()
{  
    int coun; 
    printf("Even numbers between 1 to 100\n");  
    
    for(coun=1;coun<=100;coun++) 
    {  
       
        if(coun%2 ==0)
        { 
           
            printf("%d ",coun);  
        }  
    }  
   return 0;  
} 
