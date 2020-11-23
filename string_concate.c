/*
    Problem statement :
 Accept 2 strings from user and concate the contens of first string at the end second string.
 
 Implement strcat.
 
 First : "abcd xy"
 Second : "pqr 21"
 
 Updated Second : "pqr 21 abcd xy"
 */

#include<stdio.h>

void StrcatX(char *Src, char *Dest)
{
    if( (Src == NULL) || (Dest == NULL)   )
    {
        return;
    }
    
    // Travel the Dest string till the '\0'
  
    while(*Src != '\0')    
    {
        Src++;               
    }

   
    *Src=' ';
    Src++;

   while(*Dest != '\0')
   {
       *Src = *Dest;
       Dest++;
       Src++;
   }
    
    *Dest = '\0';
}

int main()
{
    char arr[30] = {'\0'};   

    char brr[30] = {'\0'};   
    
    printf("Please enter first string\n");
    scanf("%[^'\n']s",arr);
    
    printf("Please enter second string\n");
    scanf(" %[^'\n']s",brr);
        
    StrcatX(arr,brr);       
    
    printf("String after concatination %s\n",arr);
    
    return 0;
}

