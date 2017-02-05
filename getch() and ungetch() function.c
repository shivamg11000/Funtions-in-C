/*   getch() and ungetch()  function made from getchar()*/

#define BUFSIZE 100

char buf[BUFSIZE];
int bufp=0;

int getch(void)           /*   getch() function   */
{ 
    return ((bufp>0) ? buf[--bufp] : getchar());
}

void ungetch(int c)      /*  ungetch() function   */
{
    if (bufp >=BUFSIZE)
       printf("ungetch: too many characters\n");
    else
       buf[bufp++] = c;
      
}

