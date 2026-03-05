// C program to implement binary search using recursion
#include<stdio.h>
int binsearch(int arr[], int beg, int end, int e)
{
 int mid=(beg+end)/2, n=end;
 if((beg>n-1)&&(end<0))
  return -1;
 else if(e==arr[mid])
  return mid;
 else if(e<arr[mid])
  binsearch(arr, beg, mid-1, e);
 else
  binsearch(arr, mid+1, end, e);
}
int main()
{
 int A[100], n, i, j, t, e, p;
 printf("Enter the number of elements in the array: ");
  scanf("%d",&n);
 printf("\nEnter the elements in the array:\n");
 for(i=0;i<n;i++)
 {
  printf("Enter element %d: ",i+1);
   scanf("%d",&A[i]);
 }
 printf("\nOriginal Array: ");
 for(i=0;i<n;i++)
  printf("%d ",A[i]);
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
 printf("\n\nEnter element to be searched for in the array: ");
  scanf("%d",&e);
 p=binsearch(A, 0, n-1, e);
 if(p==-1)
  printf("\nElement %d not found anywhere in the array.",e);
 else
 {
  printf("\nElement %d found at position %d in the array using binary search.",e,p+1);
  do{
   p--;
  }while(e==A[p]);
  printf("\n\nElement %d first occurs at position %d in the array.",e,p+2);
 }
 return 0;
}