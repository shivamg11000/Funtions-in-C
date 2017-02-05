/* function reads a line to s[] including newline charcter */   

#include<stdio.h>

int getlin(char s[], int lim) /* lim is max length of input line  */ 
{
  int c, i;

  for( i=0 ; i<lim-1 && (c=getchar())!=EOF && c!='\n'; i++)/* first it is checked whether there    */
  {  s[i] = c;                                             /* is space in array, then whether it   */ 
  }                                                        /* is end of file or paragraph,         */
                                                           /* then whether it is newline character */
  if( c=='\n' )                                                            
  { s[i++] = c;
  }

  s[i] = '\0';              /* assigns null characerter at end of s[] */

  return i;                 /* returns the size of input */ 

}

/*******************************************************************************************************************/
 
/* implementation of it in main  */

#include<stdio.h>

int getlin(char s[], int lim);

int main()
{   int c;
    char ar[1000];
    while ((c=getlin(ar,1000))>0)
          {
            printf("%s\n",ar);
          }
    return 0;
 }
