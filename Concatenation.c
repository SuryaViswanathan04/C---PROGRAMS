#include <stdio.h>  
int main()  
{  
    char fs[20];
    char ss[20];
    int i,j;  
    printf("Enter the first string:");  
    scanf("%s",fs);  
    printf("\nEnter the second string:");  
    scanf("%s",ss);  
    for(i=0;fs[i]!='\0';i++);   
    for(j=0;ss[j]!='\0';j++)  
    {  
        fs[i]=ss[j];  
        i++;  
    }  
    fs[i]='\0';  
   printf("After concatenation: %s", fs); 
return 0; 
}
