#include<stdio.h>
int i,j;
int sort(int arr[], int n, int c)
{
 int t;
 for(i=0;i<n-1;i++)
 {
  for(j=i+1;j<n;j++)
  {
   if(c==1)
   {
    if(arr[i]>arr[j])
    {
     t=arr[i];
     arr[i]=arr[j];
     arr[j]=t;
    }
   }
   else
   {
    if(arr[i]<arr[j])
    {
     t=arr[i];
     arr[i]=arr[j];
     arr[j]=t;
    }
   }
  }
 }
}
int main()
{
 char o;
 int c, n, A[100];
 clrscr();
 do{
  printf("Enter the number of elements in the array: ");
   scanf("%d",&n);
  printf("\nEnter the elements in the array:\n\n");
  for(i=0;i<n;i++)
  {
   printf("Enter element %d: ",i+1);
    scanf("%d",&A[i]);
  }
  printf("\nEnter 1 to sort the array in ascending order & 2 to sort it in descending order.");
  printf("\nEnter your choice: ");
   scanf("%d",&c);
  if((c!=1)&&(c!=2))
  {
   printf("\n%d is an invalid choice.",c);
   printf("\n\nRe-enter your choice: ");
    scanf("%d",&c);
  }
  sort(A,n,c);
  if(c==1)
   printf("\nArray sorted in ascending order: ");
  else
   printf("\nArray sorted in descending order: ");
  for(i=0;i<n;i++)
   printf("%d ",A[i]);
  printf("\n\nDo you want to continue? (y/n): ");
   scanf("%s",&o);
  printf("\n");
 }while((o=='y')||(o=='Y'));
 return 0;
}