/*   merge sort function, time complexity nlgn    */

#include<limits.h>



void merge(int A[], int p, int q, int r)
{

    int n1=q-p+1;
    int n2=r-q;

    int L[n1+1], R[n2+1];

    int i,j;

    for ( i=0 ; i<n1 ; i++)
        L[i]=A[p+i];
    L[i]=INT_MAX;

    for ( j=0 ; j<n2 ; j++) 
        R[j]=A[q+1+j];
    R[j]=INT_MAX;

    i=0; j=0;
    int k;
    
    for ( k=p ; k<=r ; k++)
        {
            if ( L[i] <= R[j])
               A[k]=L[i++];
            else 
               A[k]=R[j++];
        }
}


void mergesortf(int A[], int p, int r)
{   int q;
    
    if( p<r )
      {
          q=(p+r)/2;
          mergesortf(A,p,q);
          mergesortf(A,q+1,r);
          merge(A,p,q,r);
      }
}



void mergesort(int A[], int size)
{
    mergesortf(A,0,size-1);
}



/****************************************************************************************************/


/*   Implementation using main() function    */


#include<stdio.h>

void mergesort(int ar[],int size);     /* prototyping */

int main()
{   int i;
    int ar[]={9,6,7,8,9,8,7,6,5,44,3,1,2,3,4,5,6,7,8,9,0,9,8,7,6,5,4,3,2,1};
    
    int size=sizeof(ar)/sizeof(ar[0]);       /* calculating the size of array   */
    
    printf("ORIGINAL ARRAY\n");
    for ( i=0; i<size ; i++ )
        printf("%d ",ar[i]);                 /* printing original Array    */
    putchar('\n');

    mergesort(ar,size);
    
    printf("SORTED ARRAY\n");
    for ( i=0; i<size ; i++ )                /* printing sorted Array    */
        printf("%d ",ar[i]);
    putchar('\n'); 
    
    return 0;
}
