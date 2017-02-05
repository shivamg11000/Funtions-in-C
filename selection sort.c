/*  selection sort function   */


void selsort( int ar[], int n)      /*  input array and array size  */       
{   int i, j, key;                  /*  time complexity n^2         */   
    
    for( i=1 ; i<n ; i++ )              
    {
        key=ar[i] ;
        j=i-1 ;
        while( j>-1 && ar[j]>key )
        {
            ar[j+1]=ar[j];
            j--;
        }
        ar[j+1]=key;
    }

}


/****************************************************************************************************/

/*   Implementation using main() function    */

#include<stdio.h>

void selsort(int ar[],int n);     /* prototyping */

int main()
{   int i;
    int ar[]={9,6,7,8,9,8,7,6,5,44,3,1,2,3,4,5,6,7,8,9,0,9,8,7,6,5,4,3,2,1};
    
    int size=sizeof(ar)/sizeof(ar[0]);       /* calculating the size of array   */
    
    printf("ORIGINAL ARRAY\n");
    for ( i=0; i<size ; i++ )
        printf("%d ",ar[i]);                 /* printing original Array    */
    putchar('\n');

    selsort(ar,size);
    
    printf("SORTED ARRAY\n");
    for ( i=0; i<size ; i++ )                /* printing sorted Array    */
        printf("%d ",ar[i]);
    putchar('\n'); 
    
    return 0;
}
