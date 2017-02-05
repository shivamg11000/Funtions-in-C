#include <stdio.h>

/*   reverse function to reverse a string    */

void reverse(char s[])              
{
  char ch;
  int i, len, j;

  for ( len=0 ; s[len]!='\0' ; len++)     /*  USED FOR COUNTING LENGTH OF STRING */
      {
      }
      
                  
  for( i=0, j=len-1 ; i<j ; i++,j--)      /*  reversing the string         */ 
   {
     ch = s[i];
     s[i] = s[j];
     s[j] = ch;
   }

  
}



/*****************************************************************************************************/


/* implementation in main()    */


#include<stdio.h>
#include<string.h>         /*  To use gets() function which inputs a line to the array s[]  */     

void reverse(char s[]);    /*  declaration or prototyping  */
int gets(char s[]);        /*                             */ 

int main()
{   char s[100];

    while(gets(s))
         {
            reverse(s);
            printf("%s\n",s);
          }
   return 0;
}


        
