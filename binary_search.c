// C program to implement binary search
#include<stdio.h>
int main()
{
 int beg, end, mid, A[100], e, n, i, j, t, c=0;
 printf("Enter the number of elements in the array: ");
  scanf("%d",&n);
 printf("\nEnter the elements in the array:\n\n");
 for(i=0;i<n;i++)
 {
  printf("Enter element %d: ",i+1);
   scanf("%d",&A[i]);
 }
 printf("\nOriginal Array: ");
 for(i=0;i<n;i++)
 {
  printf("%d ",A[i]);
 }
 for(i=0;i<n-1;i++)
 {
  for(j=i+1;j<n;j++)
  {
   if(A[i]>A[j])
   {
    t=A[i];
    A[i]=A[j];
    A[j]=t;
   }
  }
 }
 printf("\n\nSorted Array: ");
 for(i=0;i<n;i++)
  printf("%d ",A[i]);
 printf("\n\nEnter the element to be searched for in the array: ");
  scanf("%d",&e);
 beg=0;
 end=n-1;
 while((beg<=n-1)&&(end>=0))
 {
  mid=(beg+end)/2;
  if(e==A[mid])
  {
   printf("\nElement %d found at position %d in the array using binary search.",e,mid+1);
   c=1;
   break;
  }
  else if(e<A[mid])
   end=mid-1;
  else
   beg=mid+1;
 }
 if(c==0)
  printf("\nElement %d not found in the array.",e);
 else
  {
   while(e==A[mid])
    mid--;
   printf("\n\nElement %d first occurs at position %d in the array.",e,mid+2);
  }
 return 0;
}